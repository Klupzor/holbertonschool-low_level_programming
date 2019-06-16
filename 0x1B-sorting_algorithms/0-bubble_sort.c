#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: Array
 * @size: Size Array
 */
void bubble_sort(int *array, size_t size)
{
	int tmp, changed;
	size_t i;

	do {
		changed = 0;
		for (i = 0 ; i < size - 1 ; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				changed = 1;
				print_array(array, size);
			}
		}
	} while (changed == 1);
}
