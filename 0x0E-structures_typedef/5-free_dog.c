#include "dog.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - unction that initialize a variable of type struct dog
 *
 * Args:
 *	@d: pointer to the dog.
 *
 */
void free_dog(dog_t *d)
{
	free(d);
}
