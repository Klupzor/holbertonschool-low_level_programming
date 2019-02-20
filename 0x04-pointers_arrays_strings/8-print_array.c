#include <stdio.h>
/**
 * print_array - display a string.
 *
 * @s: ints.
 * @n: number of ints.
 * Return: Always 0.
 */
void print_array(int *s, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", s[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
