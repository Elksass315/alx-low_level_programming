#include "main.h"
#include <stdio.h>

/**
 * puts2 - rints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * args:
 *	@str: to be print
 */
void puts2(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
