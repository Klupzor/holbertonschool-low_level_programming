#include <stdio.h>
#include <stdlib.h>
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
	array = (char*) malloc((size * sizeof(char)) + 1);
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		array[i] = str[i];
	}
	array[i] = '\0';
	if (!array)
		return (0);
	return (array);
}
