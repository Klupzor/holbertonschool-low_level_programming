#include "holberton.h"
/**
 * factorial - factorial.
 *
 *@n: number to be factorial.
 * Return: factorial number.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
