#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes  a node.
 * @head: Pointer to head.
 * @index: Index of the node.
 * Return: 1 on success otherwise -1.
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int c;
	dlistint_t *tmp;

	if (!head || !*head)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		*head = tmp->next;
		if (*head)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	for (c = 0 ; tmp && c < index ; c++)
	{
		tmp = tmp->next;
	}
	if (!tmp)
		return (-1);
	if (tmp->prev)
		tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
