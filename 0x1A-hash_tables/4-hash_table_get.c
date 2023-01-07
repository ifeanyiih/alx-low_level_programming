#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * from a hash table
 * @ht: the hash table
 * @key: the key
 * Return: Return the value, otherwise NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if ((hash_table_t *)ht == NULL)
		return (NULL);
	if ((char *)key == NULL)
		return (NULL);
	if (*key == '\0')
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	if (index > ht->size)
		return (NULL);
	node = ht->array[index];
	if (node == NULL)
		return (NULL);
	if (strcmp((char *)key, node->key) == 0)
		return (node->value);
	node = node->next;
	while (node != NULL)
	{
		if (strcmp((char *)key, node->key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
