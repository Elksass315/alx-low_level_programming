#include "main.h"

/**
 * _islower - checks for lowercase character.
 *
 * args:
 *	@c: letter to be check.
 * Return:
 *	1 if c is lowercase
 *	0 otherwise
 */

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
