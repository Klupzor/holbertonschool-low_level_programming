#include "lists.h"
#include <string.h>
/**
 * add_nodeint  - Add new struct to the list
 * @head: header pointer to the last element of the list
 * @n: Int to add the new struct to add.
 *
 *Return: the addres the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
