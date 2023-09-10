#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 *Return: always 0
 */

int main(void)
{
	char c = 'z';

	for (; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
