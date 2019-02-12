#include "holberton.h"
/**
 * print_sign - print sign of number
 *@c: Character input
 * Return: +, 0, -
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
