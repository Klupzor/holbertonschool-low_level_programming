#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - create an array whit that range.
 *
 *@min: range min
 *@max: size max
 * Return: pointer.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL) 
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	if (old_size < new_size)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
}
