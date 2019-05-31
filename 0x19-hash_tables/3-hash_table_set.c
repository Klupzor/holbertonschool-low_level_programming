#include "hash_tables.h"


/**
 * hash_table_set - Set new node to hash table
 *
 * @ht: hash tables.
 * @key: key value.
 * @value:  Value to save into node
 * Return: 1 if it succeeded, 0 otherwise.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *tmp;

	if (strcmp(key, "") == 0 || !ht || !key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			break;
		tmp = tmp->next;
	}

	if (tmp)
	{
		free(tmp->value);
		tmp->value = strdup(value);
	}
	else
	{
		node = (hash_node_t *) malloc(sizeof(hash_node_t));
		if (!node)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		if (ht->array[index])
			node->next = ht->array[index];
		else
			node->next = NULL;

		ht->array[index] = node;
	}

	return (1);
}
