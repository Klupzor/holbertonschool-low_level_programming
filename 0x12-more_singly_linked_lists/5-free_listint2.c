#include "lists.h"

/**
 * free_listint2 - free all list
 * @head: header pointer to the last element of the list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	tmp = *head;
	while (*head != NULL)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
	}
}
