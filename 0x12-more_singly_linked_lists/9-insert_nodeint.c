#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - insert new node on list on  the index.
 * @head: header pointer to the last element of the list.
 * @idx: num of index to add new node
 * @n: value n to add at node.
 *
 *Return: the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int num_elemt = 1;

	if (!head)
		return (NULL);
	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = tmp;
		*head = new;
		return (new);
	}
	else
	{
		while (tmp != NULL)
		{
			if (num_elemt == idx)
			{
				new->next = tmp->next;
				tmp->next = new;
				return (new);
			}
			tmp = tmp->next;
			num_elemt++;
		}
	}
	return (NULL);
}
