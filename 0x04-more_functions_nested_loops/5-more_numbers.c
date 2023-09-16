#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints the numbers from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		char i = '0', c = '0';
		int b = 0;

		for (; c <= '4';)
		{
			_putchar(i);
			if (b == 1)
			{
				_putchar(c);
				c++;
			}
			else
				i++;
			if (i == ('9' + 1))
			{
				i = '1';
				b = 1;
			}
		}
		_putchar('\n');
	}
}
