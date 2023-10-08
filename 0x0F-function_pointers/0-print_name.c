#include "main.h"
#include <unistd.h>
#include "function_pointers.h"
/**
 * print_name - writes the character c to stdout
 *
 * @name: the string to be print
 * @f: func to print the string
 *
 */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
