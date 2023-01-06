#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table array
 * Return: a pointer to the hash table or NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (hash_table);
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	return (hash_table);
}
