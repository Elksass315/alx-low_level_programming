#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: key (string) to get hashed
 * @size: size of hash table
 *
 * Return: index of 'key' using djb2 function
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
