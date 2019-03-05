#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - create a dynamic copy array.
 * @str: string to copy
 *
 * Return: ponter array or null.
 */

char *_strdup(char *str)
{
	char *array;
	unsigned int i;

	if (!str)
		return (0);
	printf("size: %lu", strlen(str));
	array = malloc(strlen(str) * sizeof(char));
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		array[i] = str[i];
	}
	array[i] = '\0';
	if (!array)
		return (0);
	return (array);
}
