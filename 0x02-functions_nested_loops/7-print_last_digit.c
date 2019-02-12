# include "holberton.h"
/**
 * print_last_digit - print last number
 * @c: Character input
 * Return: last number
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_last_digit(int c)
{
	int r;

	r = (c % 10);
	if (r < 0)
	{
		r = -r;
	}
	_putchar('0' + r);
	return (r);
}
