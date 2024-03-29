#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * args:
 *	@s: locates the first occurrence in the string s
 *	@accept: serche in the bytes in the string accept
 *
 * Return: Returns a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
		s++;
		}

	return ('\0');
}
