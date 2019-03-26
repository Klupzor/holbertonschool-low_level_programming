#include "lists.h"

/**
 * get_nodeint_at_index - print the element of the index list
 * @head: header pointer to the last element of the list.
 * @index: num of element to return
 *
 *Return: the node on the index list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t num_elemt = 0;

	if (!head)
		return (NULL);
	while (head != NULL)
	{
		if (num_elemt == index)
			return (head);
		head = head->next;
		num_elemt++;
	}
	return (NULL);
}
