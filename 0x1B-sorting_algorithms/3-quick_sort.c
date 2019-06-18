#include "sort.h"
unsigned int partition(int *array, unsigned int low, unsigned int high,
		       size_t size);
void sort(int *array, unsigned int low, unsigned int high, size_t size);

/**
 *quick_sort - sorts an array of integers in ascending order using
 *the Quick sort algorithm
 *@array: array to be sorted
 *@size: size of the array
 *Return: none
 */

void quick_sort(int *array, size_t size)
{
	if (size <= 1 || array == NULL)
		return;
	sort(array, 0, size - 1, size);
}

/**
 *sort - applies sorting algorithm quick sort
 *@array: array
 *@low: initial low
 *@high: initial high
 *@size: size of array
 *Return: none
 */

void sort(int *array, unsigned int low, unsigned int high, size_t size)
{
	unsigned int part;

	if (low < high)
	{
		part = partition(array, low, high, size);
		if (part > 0)
			sort(array, low, part - 1, size);
		sort(array, part + 1, high, size);
	}
}

/**
 *partition - does the partition for the array
 *@array: array
 *@low: low number
 *@high: high number
 *@size: size of array
 *Return: low
 */

unsigned int partition(int *array, unsigned int low, unsigned int high,
		       size_t size)
{
	int pivot;
	unsigned int tmp, i, j;

	pivot = array[high];
	i = low;
	for (j = low; j < high; j++)
		if (array[j] < pivot)
		{
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			i++;
		}
	if (i != high)
	{
		tmp = array[i];
		array[i] = array[high];
		array[high] = tmp;
		print_array(array, size);
	}
	return (i);
}
