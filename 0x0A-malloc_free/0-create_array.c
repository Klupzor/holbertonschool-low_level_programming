#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (0);
	array = malloc(size * sizeof(char));
	if (array == 0)
		return (0);
	for (i = 0 ; i < size ; i++)
	{
		array[i] = c;
	}
	return(array);
}
