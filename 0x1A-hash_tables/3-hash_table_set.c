#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: element key
 * @value: element value
 * Return: 1 on Success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *v_cpy;
	hash_node_t *node;
	unsigned int i;
	unsigned long int index;

	if ((char *)value == NULL)
		return (0);
	if (ht == NULL)
		return (0);
	if ((char *)key == NULL)
		return (0);
	if (*key == '\0')
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = (char *)key;
	index = key_index((unsigned char *)key, ht->size);
	i = 0;
	while (value[i] != '\0')
		++i;
	v_cpy = malloc(sizeof(char) * (i + 1));
	if (v_cpy == NULL)
		return (0);
	strcpy(v_cpy, value);
	node->value = v_cpy;
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
