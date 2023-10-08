#include "main.h"
#include <unistd.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 *
 * @array: array of the element
 * @size: array size
 * @action: the func to exe
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL || array == NULL)
		return;
	for (; i < size; i++)
		(*action)(array[i]);
}
