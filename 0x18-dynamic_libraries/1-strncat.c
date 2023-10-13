#include "main.h"
#include <stdio.h>

/**
 * _strncat - reverses a string.
 *
 * args:
 *	@dest: string to be add to;
 *	@src:the 2nd string that being appended.
 *	@n: use at most n bytes from src
 * Return: pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
