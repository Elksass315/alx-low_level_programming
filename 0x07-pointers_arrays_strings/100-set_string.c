#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char.
 *
 * args:
 *	@s: pointer to pointer to put the peam (to) in.
 *	@to: the char to be copy from.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
