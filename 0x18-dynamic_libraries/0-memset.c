#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte.
 *
 * args:
 *	@s: area to be fill.
 *	@b: constante to be fill the area by.
 *	@n: fills the first n bytes of the memory area.
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
