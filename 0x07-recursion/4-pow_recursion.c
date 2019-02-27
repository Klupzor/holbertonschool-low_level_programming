#include "holberton.h"
/**
 * _pow_recursion - pow x to y.
 *
 * @x: number.
 * @y: pow.
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
