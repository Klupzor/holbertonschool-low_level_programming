#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array whit that range.
 *
 *@min: range min
 *@max: size max
 * Return: pointer.
 */
int *array_range(int min, int max)
{
	int *p;
	int t, i;

	if (min > max)
		return (NULL);
	t = max - min;
	p = malloc(t * sizeof(int) + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0 ; i <= t ; i++)
	{
		p[i] = i + min;
	}
	return (p);
}
