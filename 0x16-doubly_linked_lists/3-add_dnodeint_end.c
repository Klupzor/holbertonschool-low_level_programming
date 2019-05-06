#include "lists.h"

/**
 * add_dnodeint_end - Add new node at the end
 * @head: Pointer to head of a list
 * @n: Integer value to add at node
 * Return: Pointer to the first node.
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;

	if (!head)
		return (NULL);

	tmp = *head;
	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (*head);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;
	new->prev = *head;

	return (new);
}
