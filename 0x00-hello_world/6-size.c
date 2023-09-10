#include <stdio.h>

/**
 * main - Entry point print a string
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 's';
	int i = 1;
	long int l = 2;
	long long int ll = 3;
	float f = 1.2;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
