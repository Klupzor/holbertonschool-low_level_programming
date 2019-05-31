#include "hash_tables.h"

/**
 * hash_table_delete - delates a hash table.
 *
 * @ht: hash tables.
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *tmp, *next;

	if (!ht)
		exit(12);
	for (index = 0 ; index < ht->size ; index++)
	{
		tmp = ht->array[index];
		while (tmp)
		{
			next = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = next;
		}
	}
	free(ht->array);
	free(ht);
}
