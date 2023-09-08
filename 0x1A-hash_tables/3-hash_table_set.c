#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to the hash table you want to add or update the key/value to
 * @key: key to add the element
 * @value: is the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	char *vCopy, *kCopy;
	hash_node_t  *bucket, *newNode;

	if (!ht || !key || !*key || !value)
		return (0);

	vCopy = strdup(value);
	if (!vCopy)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[i];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
		{
			free(bucket->value);
			bucket->value = vCopy;
			return (1);
		}
		bucket = bucket->next;
	}
	newNode = calloc(1, sizeof(hash_node_t));
	if (newNode == NULL)
	{
		free(vCopy);
		return (0);
	}
	kCopy = strdup(key);
	if (!kCopy)
		return (0);
	newNode->key = kCopy;
	newNode->value = vCopy;
	newNode->next = ht->array[i];
	ht->array[i] = newNode;
	return (1);
}
