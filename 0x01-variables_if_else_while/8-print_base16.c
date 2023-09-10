#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase,
 *followed by a new line.
 *
 *Return: always 0
 */

int main(void)
{
	char c = '0';

	for (; c <= '9'; c++)
		putchar(c);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
