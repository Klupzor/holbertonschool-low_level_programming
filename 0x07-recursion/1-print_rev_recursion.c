#include "holberton.h"
/**
 * _print_rev_recursion - print reverse string
 *
 *@s: String.
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s);
		s++;
		_putchar(*s);
	}
}
