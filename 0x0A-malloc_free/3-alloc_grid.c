#include <stdio.h>
#include <stdlib.h>
/**
 * clean - free memory
 * @array: pointer to be liberate
 * @i: size of matrix.
 *
 */

void clean(int **array, int i)
{
	for (; i >= 0 ; i--)
	{
		free(array[i]);
	}
	free(array);
}

/**
 * alloc_grid - create array row x col
 * @col: string to copy
 * @row: string to copy
 *
 * Return: ponter array 2D or null.
 */

int **alloc_grid(int col, int row)
{
	int **array;
	int i, j;

	if (col <= 0 || row <= 0)
		return (NULL);
	array = (int **) malloc(row * sizeof(int *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0 ; i < row ; i++)
	{
		array[i] = (int *) malloc(col * sizeof(int));
		if (array[i] == NULL)
		{
			clean(array, i);
			return (NULL);
		}
		for (j = 0 ; j < col ; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
