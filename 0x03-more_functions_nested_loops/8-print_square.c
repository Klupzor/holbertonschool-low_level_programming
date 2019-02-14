#include "holberton.h"
/**
 * print_square - print square  n * n
 *
 *@n: Numbers of lines.
 * Return: On success result.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_square(int n)
{
	int c, d;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (d = 0 ; d < n ; d++)
		{
			for (c = 0 ; c < n ; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
