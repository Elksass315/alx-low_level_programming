#include <stdio.h>
/**
 * main - program that prints its name, followed by a new line.
 *
 * Args:
 * 	@argc: thr arg count.
 * 	@argv: the arg vectore.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	printf("%s\n", *argv);
	argc = argc;
	return (0);
}
