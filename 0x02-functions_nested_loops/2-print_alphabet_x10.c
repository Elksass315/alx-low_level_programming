#include "main.h"

/**
 * print_alphabet_x10 - print alphabet letters 10 time
 * Return: (always) 0
 */

void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	for (; i < 10 ; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
