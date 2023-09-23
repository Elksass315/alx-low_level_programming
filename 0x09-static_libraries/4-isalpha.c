#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *
 * args:
 *	@c: letter to be check.
 * Return:
 *	1 if c is alphabetic
 *	0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
