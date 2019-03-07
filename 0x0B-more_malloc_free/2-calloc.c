#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - malloc.
 *
 *@nmemb: number of elements
 *@size: size of pointer
 * Return: pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int t;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = nmemb * size;
	p = malloc(t);
	if (p == NULL)
		return (NULL);
	return (p);
}
