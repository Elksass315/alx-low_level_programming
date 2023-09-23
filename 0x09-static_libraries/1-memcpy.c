#include "main.h"
#include <stdio.h>

/**
 * _memcpy - fills memory with a constant byte.
 *
 * args:
 *	@dest: area to be fill.
 *	@src: area to fill dest with.
 *	@n: fills the n bytes of the memory area.
 * Return: a pointer to the memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
