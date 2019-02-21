#include "holberton.h"
/**
 * reverse_array - prints reverse  int array.
 *
 * @s: string;
 * @n: int size of string;
 */
void reverse_array(int *s, int n)
{
	int i, c, p = 0;

	for (c = n - 1 ; c >= n / 2 ; c--)
	{
		i = s[p];
		s[p] = s[c];
		s[c] = i;
		p++;
	}
}
