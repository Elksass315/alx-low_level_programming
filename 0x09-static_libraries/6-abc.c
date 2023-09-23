#include "main.h"

/**
 *_abs - computes the absolute value of an integer.
 *
 * args:
 *	@n: num.
 * Return:
 *	abs value.
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
