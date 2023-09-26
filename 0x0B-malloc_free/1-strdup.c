#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * Args:
 *	@str: od string;
 * Return: pointer to the new string.
 *	or NULL if the allocation fall or size < 1.
 */
char *_strdup(char *str)
{
	char *newStr;
	int i;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	newStr = malloc(sizeof(char) * (i + 1));

	if (!newStr)
		return (NULL);

	for (i = 0; str[i]; i++)
		newStr[i] = str[i];

	return (newStr);
}
