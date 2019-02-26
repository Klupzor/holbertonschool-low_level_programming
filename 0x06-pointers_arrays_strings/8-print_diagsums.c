#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i = 0, x, y;
/*
	while (i < size)
	{
		printf("numero: %i, ", a[i + size * i]);
		i++;
	}
	printf("\n");
*/
	i = 0;
	while (i < size)
	{
		y = size - i;
		x = i;
		printf("num: %i, x: %i, y: %i\n", a[y + size * x], x, y);
		i++;
	}
}
