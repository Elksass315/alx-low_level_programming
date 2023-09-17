#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, followed by a new line, to stdout, in reverce.
 *
 * args:
 *	@s: string to be print in reverce;
 */
void print_rev(char *s)
{
	int length = 0, i;

	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
