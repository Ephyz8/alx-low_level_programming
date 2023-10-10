#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Function to initialize dog
 * @d: dog pointer
 * @name: name pointer
 * @age: age
 * @owner: point to owner
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
