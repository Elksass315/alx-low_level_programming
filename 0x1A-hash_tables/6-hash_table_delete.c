#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *bag, *aux;
	unsigned long int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		bag = ht->array[i];
		while (bag)
		{
			aux = bag;
			bag = bag->next;
			if (aux->key)
				free(aux->key);
			if (aux->value)
				free(aux->value);
			free(aux);
		}
	}
	free(ht->array);
	free(ht);
}
