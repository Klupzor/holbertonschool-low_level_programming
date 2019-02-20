#include "holberton.h"
/**
 * puts_half - display a half  string.
 *
 * @s: char string.
 * Return: Always 0.
 */
void puts_half(char *s)
{
	int i, c, d;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	if (i % 2 == 0)
		d = i / 2;
	else
		d = (i + 1) / 2;
	for (c = d; s[c] != '\0'; c++)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
