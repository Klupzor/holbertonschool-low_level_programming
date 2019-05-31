#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table..
 *
 * @ht: hash tables.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *tmp;
	int first = 0;

	if (!ht)
		exit(12);
	printf("{");
	for (index = 0 ; index <= ht->size ; index++)
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (first == 1)
				printf(", ");
			first = 1;
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
