#include <stdlib.h>
#include "dog.h"
/**
 * _strdup - create a dynamic copy array.
 * @str: string to copy
 *
 * Return: ponter array or null.
 */

char *_strdup(char *str)
{
	char *array;
	int i, size;

	if (!str)
		return (0);
	for (size = 1 ; str[size] != '\0' ; size++)
	{
	}
	array =  malloc((size * sizeof(char)) + 1);
	if (array == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		array[i] = str[i];
	}
	array[i] = '\0';
	return (array);
}
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
	dog_t *ndog;
	char *cname, *cowner;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		free(ndog);
		return (NULL);
	}
	cname = _strdup(name);
	if (cname == NULL)
	{
		free(ndog);
		return (NULL);
	}
	cowner = _strdup(owner);
	if (cowner == NULL)
	{
		free(ndog);
		free(cname);
		return (NULL);
	}
	ndog->name = cname;
	ndog->age = age;
	ndog->owner = cowner;
	return (ndog);
}
