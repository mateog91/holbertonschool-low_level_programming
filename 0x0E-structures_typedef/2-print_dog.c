#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints struct dog
 * @d: pointer to structure dog
 *
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d != NULL)
	{
		printf("Name: %s\nAge: 6%f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
