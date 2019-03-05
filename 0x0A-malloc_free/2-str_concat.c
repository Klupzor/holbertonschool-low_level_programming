#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenate 2 strings
 * @s1: string to copy
 * @s2: string to copy
 *
 * Return: ponter array or null.
 */

char *str_concat(char *s1, char *s2)
{
	char *array;
	int i, j, size, size2;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	for (size = 1 ; s1[size] != '\0' ; size++)
	{
	}
	for (size2 = 1 ; s2[size2] != '\0' ; size2++)
	{
	}
	array =  malloc(((size + 1) + (size2 + 1)) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		array[i] = s1[i];
	}
	for (j = 0 ; s2[j] != '\0' ; j++)
	{
		array[i] = s2[j];
		i++;
	}

	array[i] = '\0';
	return (array);
}
