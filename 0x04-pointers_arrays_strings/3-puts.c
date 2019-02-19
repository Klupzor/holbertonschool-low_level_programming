#include "holberton.h"
/**
 * _strlen - return lengh of string.
 *
 * @s: char string.
 * Return: Always 0.
 */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
