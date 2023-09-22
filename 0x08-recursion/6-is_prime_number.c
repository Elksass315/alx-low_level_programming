#include "main.h"
#include <unistd.h>
/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number
 *
 * Return: 1 if n is a prime number, else 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}
/**
 * _prime -  prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, else 0.
 */
int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime(n, i - 1));
}
