#include "main.h"

/**
 * print_alphabet - print alphabet letters
 * Return: (always) 0
 */

void print_alphabet(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
