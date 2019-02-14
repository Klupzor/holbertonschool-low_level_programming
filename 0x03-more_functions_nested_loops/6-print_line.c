#include "holberton.h"
/**
 * print_line - print line whit leght n
 *
 *@n: Numbers of lines.
 * Return: On success result.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_line(int n)
{
	int c;

	for (c = 0 ; c < n ; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
