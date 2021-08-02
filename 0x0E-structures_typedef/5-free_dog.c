#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory of dog
 * @d: pointer tod dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
