#include "lists.h"

/**
 * free_listint - free all list
 * @head: header pointer to the last element of the list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
