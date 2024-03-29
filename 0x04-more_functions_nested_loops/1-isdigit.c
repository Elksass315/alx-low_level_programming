#include "main.h"
#include <stdio.h>

/**
 * _isdigit - that checks for a digit (0 through 9).
 *
 * args:
 *	@c: char to be check.
 *
 * Return:
 *	1 if c is digit
 *	0 otherwise
 */
int  _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
