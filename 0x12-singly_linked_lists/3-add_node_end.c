#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* add_node_end - add a new node at the end of a list
* @head: pointer to a pointer of type list_t
* @str: a string to duplicate
* Return: the address of the new element, otherwise NULL
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *copy;
	unsigned int i;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	i = 0;
	while (*(str + i))
		++i;
	node->len = i;
	node->str = strdup(str);
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		copy = *head;
		while (copy->next != NULL)
		{
			copy = copy->next;
		}
		copy->next = node;
	}
	return (node);
}
