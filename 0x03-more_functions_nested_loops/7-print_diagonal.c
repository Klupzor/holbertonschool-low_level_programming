#include "holberton.h"
/**
 * print_diagonal - print diagonal line whit space n
 *
 *@n: Numbers of lines.
 * Return: On success result.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
	int c, d;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (d = 0 ; d < n ; d++)
		{
			for (c = 0 ; c < d ; c++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
