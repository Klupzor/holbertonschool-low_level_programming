#include <stdio.h>
#include <stdlib.h>
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
	array = (int **) malloc(row * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0 ; i < row ; i++)
	{
		array[i] = (int *) malloc(col * sizeof(int));
	}

	for (i = 0 ; i < row ; i++)
	{
		for (j = 0 ; j < col ; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
