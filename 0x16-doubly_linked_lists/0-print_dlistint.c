#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: the header link of nodes
 * Return: Numbers of nodes.
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (nodes);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
