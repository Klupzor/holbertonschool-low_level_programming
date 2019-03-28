#include "holberton.h"

/**
 * set_bit - print value on index binary.
 *
 * @n: Num in base 10.
 * @index: position to return that value.
 * Return: 1 on succes and -1 if exist error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int new = 1;

	if (index > 64)
		return (-1);
	new = new << index;
	*n = *n | new;
	return (1);
}
