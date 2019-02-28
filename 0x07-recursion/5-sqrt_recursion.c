#include "holberton.h"

/**
 * fsqr - extra fuction to solve sqr.
 * _sqrt_recursion - Call fsqr.
 * @i: iteration.
 * @n: number.
 * Return: Always 0.
 */

int fsqr(int i, int n)
{
	if (i * i < n)
		return (fsqr(i + 1, n));
	if (i * i == n)
		return (i);
	return (-1);
}

int _sqrt_recursion(int n)
{
	return (fsqr(1, n));
}
