#include "holberton.h"
/**
 * puts2 - prints one char out of 2 of a string.
 *
 * @s: char string.
 * Return: Always 0.
 */
void puts2(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i = i + 2)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
