#include "dog.h"
/**
 * init_dog - init dog struct.
 *
 * @d: struct dog.
 * @name: name dog.
 * @age: age dog.
 * @owner: owner dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
