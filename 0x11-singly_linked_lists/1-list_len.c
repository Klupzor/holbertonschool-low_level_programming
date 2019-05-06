#include "lists.h"

/**
 * list_len - Go througth list to cont
 * @h: header pointer to the last element of the list
 *
 *Return: Number of list elements
 */
size_t list_len(const list_t *h)
{
	size_t num_elemt = 0;

	if (!h)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		num_elemt++;
	}
	return (num_elemt);
}
