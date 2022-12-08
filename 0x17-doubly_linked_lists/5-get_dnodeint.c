#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of node to return
 * Return: nth node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	node = head;
	i = 0;
	while (node != NULL)
	{
		if (i == index)
			break;
		node = node->next;
		++i;
	}
	return (node);
}
