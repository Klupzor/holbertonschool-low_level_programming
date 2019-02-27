#include "holberton.h"
/**
 * _print_rev_recursion - print reverse string
 *
 *@s: String.
 * Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
		return (0);
}
