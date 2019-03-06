#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - free memory
 * @array: pointer to be liberate
 * @i: size of heigth matrix.
 *
 */

void free_grid(int **array, int i)
{
	int cont;

	if (!(array == NULL || i == 0))
	{
		for (cont = 0; cont < i ; cont++)
		{
			free(array[i]);
		}
		free(array);
	}
}
