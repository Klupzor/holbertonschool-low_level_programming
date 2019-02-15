#include "holberton.h"
/**
 * print_number - print number whit char.
 *
 * @n: Number.
 * Return: On success result.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_number(int n)
{
	int cont = 1;
	int pot = 1;
	unsigned int r, num;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	num = n;

	while (n / 10 > 0)
	{
		n = n / 10;
		cont++;
		pot = pot * 10;
	}
	while (cont >= 1)
	{
		if (cont == 1)
			r = num % 10;
		else
		{
			r = num / pot;
			r = r % 10;
		}
		_putchar(r + '0');
		pot = pot / 10;
		cont--;
	}
}
