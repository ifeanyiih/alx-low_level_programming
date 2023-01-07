#include "hash_table.h"

/**
 * key_index - returns the index based on the given key
 * @key: the key to generate the index from
 * @size: the size of the hash table array
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2((unsigned char *)key);
	return (hash % size);
}
