#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the memory allocated for a dog
 * @d: pointer to the dog to be freed
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
