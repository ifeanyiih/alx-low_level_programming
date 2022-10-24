#include "lists.h"

/**
* get_nodeint_at_index - return the nth node of a
* listint_t linked list
* @head: head of the list
* @index: the nth index
* Return: nth node, otherwise NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int ni;

	if (head == NULL)
		return (NULL);
	ni = 0;
	node = head;
	while (ni < index && node != NULL)
	{
		node = node->next;
		++ni;
	}
	if (!node)
		return (NULL);
	return (node);
}
