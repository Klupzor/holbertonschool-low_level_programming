#include "lists.h"

/**
 * free_list - free all list
 * @head: header pointer to the last element of the list
 *
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
