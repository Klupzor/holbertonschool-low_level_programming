#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - Creates a new dog.
 *
 *@name: name of dog.
 *@age: age of dog.
 *@owner: owner of dog.
 * Return: newdog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog, *cpdog;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		free(ndog);
		return (NULL);
	}
	cpdog = malloc(sizeof(dog_t));
	if (cpdog == NULL)
	{
		free(cpdog);
		return (NULL);
	}
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;
	cpdog->name = name;
	cpdog->owner = owner;
	return (ndog);
}
