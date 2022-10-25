#include "lists.h"

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: a pointer to a pointer to listint_t
* @idx: index to insert to
* @n: value to insert in index
* Return: a pointer to inserted node OR NULL
*/
listint_t
*insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *copy, *node;
	unsigned int index;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	index = 0;
	copy = *head;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		while ((index < idx - 1) && copy != NULL)
		{
			copy = copy->next;
			++index;
		}
		if (copy)
		{
			node->next = copy->next;
			copy->next = node;
		}
		else
		{
			free(node);
			return (NULL);
		}
	}
	return (node);
}
