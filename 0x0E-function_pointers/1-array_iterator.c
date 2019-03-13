#include <stdio.h>
/**
 * array_iterator - prints an array.
 * @array: arrat to print
 * @size: size of array.
 * @action: fuction that prints.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && size && action)
	{
		unsigned int i;

		for (i = 0 ; i < size ; i++)
		{
			action(array[i]);
		}
	}
}
