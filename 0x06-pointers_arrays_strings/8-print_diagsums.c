#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 *
 *@a: matrix.
 *@size: size matrix.
 * Return: Always 0.
 */

void print_diagsums(int *a, int size)
{
	int i = 0, x, y, sum1 = 0, sum2 = 0
;
	while (i < size)
	{
		sum1 += a[i + size * i];
		i++;
	}
	printf("%i", sum1);
	printf(", ");
	i = 0;
	while (i < size)
	{
		y = size - i - 1;
		x = i;
		sum2 += a[y + size * x];
		i++;
	}
	printf("%i", sum2);
	printf("\n");
}
