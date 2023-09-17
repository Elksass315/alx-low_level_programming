#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string.
 *
 * args:
 *	@s: var to get his lenthe
 *Return: size of s;
 *
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
