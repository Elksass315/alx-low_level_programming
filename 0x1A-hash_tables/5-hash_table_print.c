#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: pointer to the hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t  *bag;
	int n = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		bag = ht->array[i];
		while (bag)
		{
			if (n)
				printf(", ");
			printf("'%s': '%s'", bag->key, bag->value);
			n = 1;
			bag = bag->next;
		}
	}
	printf("}\n");
}
