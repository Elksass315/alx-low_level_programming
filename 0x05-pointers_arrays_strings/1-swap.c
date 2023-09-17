#include "main.h"
#include <stdio.h>

/**
 * swap_int - Write a function that swaps the values of two integers.
 *
 * args:
 *	@a: first num to be swap with b.
 *	@b: 2nd num to swap a with
 *
 */
void swap_int(int *a, int *b)
{
	int tmp = *b;
	*b = *a;
	*a = tmp;
}
