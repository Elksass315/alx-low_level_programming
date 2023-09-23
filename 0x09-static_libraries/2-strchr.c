#include "main.h"
#include <stdio.h>

/**
 * _strchr - pointer to the first occurrence of the character.
 *
 * args:
 *	@s: to serch for the char c in.
 *	@c: to serch for in the s.
 *
 * Return:  pointer to the first occurrence of the character c in the string s
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
