#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elements of the list
 * @h: header pointer to the last element of the list
 *
 *Return: Number of elements printed
 */
size_t print_listint(const listint_t *h)
{
	size_t num_elemt = 0;

	if (!h)
		return (0);
	while (h != NULL)
	{
		printf("%i\n", h->n);

		h = h->next;
		num_elemt++;
	}
	return (num_elemt);
}
