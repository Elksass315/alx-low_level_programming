#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 *Return: always 0
 */

int main(void)
{
	char c = 'a';

	for (; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
