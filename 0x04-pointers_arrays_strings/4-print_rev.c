#include "holberton.h"
/**
 * print_rev - prints a string, in reverse.
 *
 * @s: char string.
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i, c;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (c = i - 1 ; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
