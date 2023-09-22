#include "main.h"
#include <unistd.h>
/**
 * _pow_recursion - value of x raised to the power of y.
 *
 * Args:
 *	@x: base number
 *	@y: the pow.
 *
 * Return: value of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
