#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function that prints the chessboard.
 *
 * args:
 *	@a: bpord to be print.
 *
 * Return: always 0.
 */
void print_chessboard(char (*a)[8])
{
	int i = 0,  j = 0;

	for (; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
