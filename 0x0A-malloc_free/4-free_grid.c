#include <stdio.h>
#include <stdlib.h>
/**
 * clean - free memory
 * @array: pointer to be liberate
 * @i: size of heigth matrix.
 *
 */

void free_grid(int **array, int i)
{
	if (array == NULL || i >= 0)
	{
		for (; i >= 0 ; i--)
		{
			free(array[i]);
		}
		free(array);
	}
}
