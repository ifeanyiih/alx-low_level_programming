#include "hash_tables.h"

void print_list(hash_node_t *list);


/**
 * hash_table_print - prints a hash table
 * @ht: a pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, size;
	hash_table_t *table;
	int printed;

	table = (hash_table_t *)ht;
	if (table != NULL)
	{
		size = table->size;
		putchar('{');
		i = 0;
		printed = 0;
		while (i < size)
		{
			if (table->array[i] == NULL)
			{
				++i;
				continue;
			}
			if (printed)
				printf("%s", ", ");
			print_list(table->array[i]);
			printed = 1;
			++i;
		}
		putchar('}');
	}
}

/**
 * print_list - prints a given lists key and value pairs
 * @list: the list
 */
void print_list(hash_node_t *list)
{
	hash_node_t *node;

	node = list;
	while (node != NULL)
	{
		printf("'%s':'%s'", node->key, node->value);
		if (node->next != NULL)
			printf(", ");
		node = node->next;
	}
}
