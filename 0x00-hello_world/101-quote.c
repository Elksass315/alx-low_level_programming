#include <stdio.h>

/**
 * main - Entry point print a string
 *
 *
 * Return: Always 1 (fail)
 */
int main(void)
{
	std::string str;
	str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
	fprintf(stderr, str);
	return (1);
}
