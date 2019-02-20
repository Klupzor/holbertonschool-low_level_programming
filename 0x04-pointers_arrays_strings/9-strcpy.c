#include "holberton.h"
/**
 * _strcpy - prints reverse  copy.
 *
 * @s: char string.
 * @a: copy char string.
 * Return: Always 0.
 */
char *_strcpy(char *s, char *a)
{
	int c, i;

	for (i = 0 ; a[i] != '\0' ; i++)
	{
	}
	for (c = 0 ; c < i &&  a[c] != '\0' ; c++)
		s[c] = a[c];
	return (s);
}
