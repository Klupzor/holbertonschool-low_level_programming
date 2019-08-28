#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 *
 * @array: array
 * @size: array size
 * @value: val to search
 *
 * Return: index of value, otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t range, step, i, prev;

	if (!array)
		return (-1);
	range = sqrt(size);
	step = 0;
	while (array[step] < value && step <= size - 1)
	{
		printf("Value checked array[%lu] = [%i]\n", step, array[step]);
		prev = step;
		step += range;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, prev + range);
	for (i = prev ; i <= (prev + range) && i <= size - 1; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);

}
