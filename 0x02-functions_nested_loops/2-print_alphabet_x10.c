#include "holberton.h"
/**
 * print_alphabet_x10 - writes 10 times the alphabet in lowercase
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_alphabet_x10(void)
{
	char a;
	int c;

	for (c = 0 ; c < 10 ; c++)
	{
	for (a = 'a' ; a <= 'z' ; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
	}
}
