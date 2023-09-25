#include <stdio.h>
/**
 * main - program that prints all arguments it receives.
 *
 * Args:
 *	@argc: thr arg count.
 *	@argv: the arg vectore.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
