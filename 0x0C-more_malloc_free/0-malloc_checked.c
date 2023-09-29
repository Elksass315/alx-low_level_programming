#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc.
 *
 * Args:
 *	@b: memory size to allocate;
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{

	void *x = malloc(b);

	if (x == NULL)
		exit(98);
	return (x);
}
