#include "main.h"
#include <stdio.h>

/**
 * puts_half - rints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * args:
 *	@str: to be print
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
void puts_half(char *str)
{
	str++;
	if (_strlen(str) % 2 == 1)
	       str+=2;	
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
