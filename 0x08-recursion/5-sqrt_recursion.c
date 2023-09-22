#include "main.h"
#include <unistd.h>
/**
 * _sqrt_recursion - square root of a number
 * @n: number to calculate the square root of
 *
 * Return: square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sq(n, 0));
}
/**
 * sq- sdadf
 * @n:  sqaure root of
 * @i: iterator
 *
 * Return: square root
 */
int sq(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sq(n, i + 1));
}
