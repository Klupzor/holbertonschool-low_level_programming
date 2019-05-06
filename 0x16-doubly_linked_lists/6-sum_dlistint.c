#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data(n)
 * @head: Pointer to head of a list
 * Return: Sum.
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
