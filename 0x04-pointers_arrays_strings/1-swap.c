#include<stdio.h>
/**
 * swap_int - swaps the values.
 *
 * @a: pointer address.
 * @b: pointer address.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
