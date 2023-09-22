#include "main.h"
#include <unistd.h>
/**
 * strlen_recursion - returns the length of a string.
 *
 * Args:
 *	@s: string
 *
 * Return: size of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 +  _strlen_recursion(s + 1));
	return (0);
}
