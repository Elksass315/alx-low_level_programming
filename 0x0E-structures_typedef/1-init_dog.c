#include "dog.h"
#include <unistd.h>
/**
 * init_dog - unction that initialize a variable of type struct dog
 *
 * Args:
 *	@d: pointer to the dog.
 *	@name: dog name.
 *	@age: dog age.
 *	@owner: dog owner.
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
