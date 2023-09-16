#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal.
 *
 * args:
 *	@n: the size of the line.
 */
void print_line(int n)
{
	int i = 0;

	for (; i < n; i++)
		_putchar('_');
	putchar('\n');
}
