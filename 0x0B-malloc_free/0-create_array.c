#include "main.h"
#include <unistd.h>
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * Args:
 *	@size: array size.
 *	@c: initializes the array with a specific char
 * Return: pointer to the array
 *	or NULL if the allocation fall or size < 1.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size < 1)
		return (NULL);
	array = (char *)malloc(size * sizeof(char));
	if (!array)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);

}
