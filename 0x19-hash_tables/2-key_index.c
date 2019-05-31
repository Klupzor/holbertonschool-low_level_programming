#include "hash_tables.h"

/**
 * key_index - Convert the key str to int index
 * @key: char key.
 * @size: Table size
 * Return: the index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int kindex;

	kindex = hash_djb2(key);
	kindex = kindex % size;
	return (kindex);
}
