#include "hash_tables.h"
hash_node_t *find_node(hash_table_t *ht, char *key);


/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: element key
 * @value: element value
 * Return: 1 on Success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;
	char *sp;

	if ((char *)value == NULL)
		return (0);
	if (ht == NULL)
		return (0);
	if ((char *)key == NULL)
		return (0);
	if (strcmp(key, "") == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	node = find_node(ht, (char *)key);
	if (node != NULL)
	{
		free(node->value);
		sp = strdup(value);
		node->value = sp;
	}
	else
	{
		node = malloc(sizeof(hash_node_t));
		if (node == NULL)
			return (0);
		sp = strdup(key);
		if (sp == NULL)
			return (0);
		node->key = sp;
		sp = strdup(value);
		if (sp == NULL)
			return (0);
		node->value = sp;
		node->next = ht->array[index];
		ht->array[index] = node;

	}
	return (1);
}


/**
 * find_node - finds a node with key in a hash_table
 * @ht: hash table
 * @key: the key
 * Return: a pointer to node, otherwise NULL
 */
hash_node_t *find_node(hash_table_t *ht, char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);
	if (key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
			return (node);
		node = node->next;
	}
	return (NULL);
}
