#include "holberton.h"

/**
 * fpri - extra fuction to solve is_prime.
 * @i: iteration prime number.
 * @n: number.
 * Return: Always 0.
 */

int fpri(int i, int n)
{
	if (n <= i)
		return (1);
	if (n % i == 0)
		return (0);
	if (n > i)
		return (fpri(i + 1, n));
	return (0);
}

/**
 * is_prime_number - Call fpri.
 * @n: number.
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (fpri(2, n));
}
