#include "search_algos.h"

/**
 * linear_search - Search linear
 *
 * @array: array
 * @size: size array
 * @value: Value to search
 * Return: index or -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0 ; i < size ; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
