#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to head of a list.
 * @idx: New node index.
 * @n: Integer value to add at node.
 * Return: Pointer to the new node.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *header = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!h)
		return (0);
	if (!new)
		return (0);
	new->n = n;
	if (!*h)
	{
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (idx - 1 > 0)
	{
		if (!header)
		{
			free(new);
			return (0);
		}
		header = header->next;
		idx--;
	}
	new->next = header->next;
	if (new->next)
		new->next->prev = new;

	new->prev = header;
	header->next = new;

	return (new);
}
