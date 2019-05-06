#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all elements of the list
 * @h: header pointer to the last element of the list
 *
 *Return: Number of elements printed
 */
size_t print_list(const list_t *h)
{
	size_t num_elemt = 0;

	if (!h)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] %p\n", h->str);
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		num_elemt++;
	}
	return (num_elemt);
}
