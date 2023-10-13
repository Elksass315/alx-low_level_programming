#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy a string like stdio strncpy.
 *
 * args:
 *	@dest: string to be add to;
 *	@src:the 2nd string that being copy.
 *	@n: use at most n bytes from src
 * Return: pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
