#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of the list
 * @head: dlistint_t d pointer to head of  a d-list
 * @index: Node number
 * Return: Pointer to the index node or NULL.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	if (!head)
		return (NULL);

	while (head)
	{
		if (counter == index)
			return (head);
		counter++;
		head = head->next;
	}

	return (NULL);
}
