#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print dog structure.
 *
 * @d: struct dog.
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name == NULL)
		printf("Name: %p\n", d->name);
	else
		printf("Name: %s\n", d->name);
	if (d->age == 0)
		printf("Age: %f\n", 0.0);
	else
		printf("Age: %f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: %p\n", d->owner);
	else
		printf("Owner: %s\n", d->owner);
}
