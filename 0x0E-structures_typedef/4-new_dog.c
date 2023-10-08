#include "dog.h"
#include <unistd.h>
#include <stdio.h>
/**
 * print_dog - unction that initialize a variable of type struct dog
 *
 * Args:
 *	@d: pointer to the dog.
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t mydog;
	dog_t *newDog = &mydog;

	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;

	return(newDog);
}
