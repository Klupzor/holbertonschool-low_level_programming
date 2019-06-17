#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using the
 * Selection sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 * Return: none
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, sw;
	int tmp, tmpInd;

	for (i = 0; i < size; i++)
	{
		sw = 0;
		tmp = array[i];
		for (j = i; j < size; j++)
		{
			if (array[j] < tmp)
			{
				tmpInd = j;
				tmp = array[j];
				sw = 1;
			}

		}
		if (sw == 1)
		{
			array[tmpInd] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
