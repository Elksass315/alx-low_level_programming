#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase,
 * followed by a new line.
 * Print all the letters except q and e
 *
 *Return: always 0
 */

int main(void)
{
	char c = 'a';

	for (; c <= 'z'; c++){
		if ( c == 'q' || c == 'e')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
