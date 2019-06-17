#include "sort.h"
/**
 * bubble_sort - sorts an array of integers in ascending order
 * @array: Array
 * @size: Size Array
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *pre;
	int tmp, changed;
	size_t i;

	head  = *list;
	changed = 0;
	while (head)
	{
		pre = head;
		head = head->next;
		while (pre->n < head->n)
		{
			tmp = array[i];
			array[i] = array[i + 1];
			array[i + 1] = tmp;
			changed = 1;
			print_array(array, size);
		}
	}
}
