#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * Args:
 *	@size: array member size
 *	@nmemb: num of array members.
 * Return: pointer to the new array
 * 	NULL if fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	for (; i < (size * nmemb); i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
