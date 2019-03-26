#include "lists.h"

/**
 * sum_listint - sums all elements of the list
 * @head: header pointer to the last element of the list
 *
 *Return: sum of all number n of the list.
 */
int sum_listint(listint_t *head)
{
	int num_elemt = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		num_elemt += head->n;
		head = head->next;
	}
	return (num_elemt);
}
