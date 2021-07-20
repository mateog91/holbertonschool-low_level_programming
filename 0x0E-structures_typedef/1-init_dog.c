#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initialize a variable of type dog
 * @d: pointer to structure dog
 * @name: pointer to name
 * @age: Age of dog
 * @owner: pointer to owner
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
