#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that prints all possible
 *different combinations of two digits.
 *
 *Return: always 0
 */

int main(void)
{
	int c = '0';

	for (; c < '9'; c++)
	{
		int s = c + 1;

		for (; s <= '9'; s++)
		{
			putchar((char)c);
			putchar((char)s);
			if ((char)c == '8' && s == '9')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
