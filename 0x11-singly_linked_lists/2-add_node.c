#include "lists.h"
#include <string.h>
/**
 * add_node  - Add new struct to the list
 * @head: header pointer to the last element of the list
 * @str: String to add the new struct to add.
 *
 *Return: the addres the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int strlen;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (strlen = 0 ; str[strlen] != '\0' ; strlen++)
	{
	}
	new->len = strlen;
	new->next = *head;
	*head = new;

	return (new);
}
