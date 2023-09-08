#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: pointer to the hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: Returns the value associated with the element, or NULL otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t  *bag;

	if (!ht || !key || !*key)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	bag = ht->array[i];

	while (bag)
	{
		if (!strcmp(key, bag->key))
			return (bag->value);
		bag = bag->next;
	}
	return (NULL);
}
