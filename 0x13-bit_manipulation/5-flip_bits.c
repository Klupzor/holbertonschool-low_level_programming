#include "holberton.h"
#include <stdio.h>

/**
 * compare - count the 1 thar xor result.
 *
 * @xorn: Result xor num.
 * Return: numbers of ones.
 */

unsigned long int compare(unsigned long int xorn)
{
	unsigned long int cont = 0;

	while (xorn)
	{
		cont += (xorn & 1);
		xorn = xorn >> 1;
	}
	return (cont);
}

/**
 * flip_bits - Return the diferents betwing 2 binary nums.
 *
 * @n: firstnum on base 10.
 * @m: second num on base 10.
 * Return: the diferences.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (compare(n ^ m));
}
