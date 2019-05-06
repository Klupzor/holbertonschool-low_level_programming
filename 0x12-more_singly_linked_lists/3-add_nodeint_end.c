#include "lists.h"
#include <string.h>
/**
 * add_nodeint_end  - Add new struct to the list at the end
 * @head: header pointer to the last element of the list
 * @n: Int to add the new struct to add.
 *
 *Return: the addres the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
	}
	return (new);
}
