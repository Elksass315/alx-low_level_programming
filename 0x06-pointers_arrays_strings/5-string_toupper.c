#include "main.h"
#include <stdio.h>

/**
 * string_toupper - to upper case letter
 *
 * args:
 *	@n: char to upper
 *Return: upper letter string
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - ('a' - 'A');
		i++;
	}
	return (n);
}
