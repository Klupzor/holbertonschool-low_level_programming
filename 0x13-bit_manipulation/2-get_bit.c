#include "holberton.h"

/**
 * get_bit - print value on index binary.
 *
 *@n: Num in base 10.
 *@index: position to return that value.
 * Return: The bit on that index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return (n = n >> index & 1);

}
