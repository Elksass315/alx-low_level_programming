#include "main.h"
#include <stdio.h>

/**
 * _strcat - reverses a string.
 *
 * args:
 *	@dest: string to be add to;
 *	@src:the 2nd string that being appended.
 * Return: pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
