#include "main.h"
#include <stdio.h>

/**
 * _strstr - searches a string for any of a set of bytes.
 *
 * args:
 *	@haystack: serch in.
 *	@needle: serch for.
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
