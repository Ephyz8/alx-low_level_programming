#include "dog.h"
#include <stdio.h>

/**
 * free_dog - frees dog
 * @d: dog
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
