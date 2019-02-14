#include "holberton.h"
/**
 * print_triangle - print triangle n.
 *
 *@n: Numbers of lines.
 * Return: On success result.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_triangle(int n)
{
	int c, d;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (d = 0 ; d < n ; d++)
		{
			for (c = 1 ; c <= n ; c++)
			{
				if (n - c > d)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
