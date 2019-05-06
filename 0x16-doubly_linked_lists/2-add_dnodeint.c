#include "lists.h"

/**
 * add_dnodeint - Function that adds a new node at the beginning
 * @head: Pointer to head of a list
 * @n: Integer value to add at node
 * Return: Pointer to the first node.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;
return (new);
}
