# include "holberton.h"
/**
 * print_last_digit - print last number
 *@c: Character input
 * Return: last number
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_last_digit(int c)
{
	int r;

	if (c < 0)
	{
		c = -c;
	}
	r = (c % 10);
	r = _putchar(r + '0');
	return (r);
}
