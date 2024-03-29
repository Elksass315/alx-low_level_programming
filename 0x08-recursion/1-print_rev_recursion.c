#include "main.h"
#include <unistd.h>
/**
 * _print_rev_recursion -  prints a string in reverse, using recursion.
 *
 * Args:
 *	@s: string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
