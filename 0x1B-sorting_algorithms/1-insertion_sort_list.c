#include "sort.h"
/**
 * insertion_sort_list - sorts an list of integers in ascending order
 * @list: List
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *pre, *num;
	int condition = 0;

	if (list)
		head  = *list;
	else
		return;

	if (head->next)
		condition = 1;
	while (head && condition == 1)
	{
		pre = head->prev;
		num = head;
		while (pre && num->n < pre->n)
		{
			if (pre->prev)
				pre->prev->next = num;
			pre->next = num->next;
			num->prev = pre->prev;
			pre->prev = num;
			num->next = pre;
			if (pre->next)
				pre->next->prev = pre;

			pre = num->prev;
			if (!num->prev)
				*list = num;
			print_list(*list);
		}
		head = head->next;
	}
}
