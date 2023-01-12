#include "hash_tables.h"
void free_list(hash_node_t *list);


/**
 * hash_table_delete - deletes a hash table
 * @ht: a pointer to the hash_table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *table;
	unsigned long int size, i;

	if (ht != NULL)
	{
		table = ht;
		size = table->size;

		i = 0;
		while (i < size)
		{
			if (table->array[i] == NULL)
			{
				++i;
				continue;
			}
			free_list(table->array[i]);
			++i;
		}
		free(table->array);
		free(table);
	}
}

/**
 * free_list - frees a list
 * @list: the list to free
 */
void free_list(hash_node_t *list)
{
	hash_node_t *node;
	hash_node_t *cpy;

	node = list;
	while (node != NULL)
	{
		free(node->key);
		free(node->value);
		cpy = node->next;
		free(node);
		node = cpy;
	}
}
