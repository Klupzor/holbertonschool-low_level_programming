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
	unsigned int i;

	if (str == 0)
		return (0);
	array = malloc(sizeof(str));
	for (i = 0 ; str[i] != '\0' ; i++)
	{
		array[i] = str[i];
	}
	if (array != 0)
		return (array);
	return (0);
}
