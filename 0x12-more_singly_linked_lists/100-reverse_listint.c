#include "lists.h"

/**
 * reverse_listint - reverse the list.
 * @head: header pointer to the last element of the list.
 *
 *Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *sv;

	if (!*head)
		return (NULL);

	sv = NULL;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = sv;
		sv = *head;
		*head = tmp;
	}
	*head = sv;

	return (*head);
}
