#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 *
 * args:
 *	@s1: string to compare with.
 *	@s2: 2nd string.
 * Return: copmpare resulte.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
