#include "main.h"
#include <unistd.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 *
 * @array: elememnts.
 * @size: array size.
 * @cmp: func to search with.
 *
 * Return: index of the first element for which the cmp
 * function does not return 0 if no match return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL)
		return (-1);
	for (; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return (-1);
}
