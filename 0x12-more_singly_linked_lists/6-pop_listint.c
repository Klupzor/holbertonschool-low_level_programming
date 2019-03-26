#include "lists.h"

/**
 * pop_listint - delete node
 * @head: header pointer to the last element of the list
 *
 *Return: if the linked list is empty return 0, else return n;
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int tmpn;

	if (head != NULL)
	{
		tmp = *head;
		tmpn = tmp->n;
		tmp = tmp->next;
		free(*head);
		*head = tmp;
		return (tmpn);
	}
	return (0);
}
