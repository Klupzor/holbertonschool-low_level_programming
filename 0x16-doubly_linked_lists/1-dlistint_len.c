#include "lists.h"
/**
 * dlistint_len - Return the num of elements of a dlistint_t list
 * @h: the header link of nodes
 * Return: Numbers of nodes.
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (nodes);
	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
