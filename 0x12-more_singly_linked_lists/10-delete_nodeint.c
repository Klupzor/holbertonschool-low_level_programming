#include "lists.h"

/**
 * delete_nodeint_at_index - delete node on list on  the index.
 * @head: header pointer to the last element of the list.
 * @index: num of index to delete  node
 *
 *Return: 1 on succes an -1 if it doesn't.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *sv;
	unsigned int num_elemt = 0;

	if (!*head)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		sv = tmp->next;
		free(*head);
		*head = sv;
		return (1);
	}
	else
	{
		sv = tmp;
		while (tmp != NULL)
		{
			if (num_elemt == index)
			{
				sv->next = tmp->next;
				free(tmp);
				return (1);
			}
			sv = tmp;
			tmp = tmp->next;
			num_elemt++;
		}
	}
	return (-1);
}
