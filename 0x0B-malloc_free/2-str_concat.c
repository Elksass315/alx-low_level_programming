#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - returned pointer should point to a newly allocated space in
 * memory which contains the contents of s1,
 * followed by the contents of s2, and null terminated
 *
 * Args:
 *	@s1: first string.
 *	@s2: 2nd string.
 * Return: pointer to the new string.
 *	or NULL if the allocation fall or size < 1.
 */
char *str_concat(char *s1, char *s2)
{
	char *newStr;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	newStr = malloc(sizeof(char) * (i + j + 1));

	if (newStr == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		newStr[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		newStr[i] = s2[j];
		i++, j++;
	}
	newStr[i] = '\0';
	return (newStr);
}
