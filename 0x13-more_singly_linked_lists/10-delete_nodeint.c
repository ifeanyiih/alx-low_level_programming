#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index of a
* listint_t linked list
* @head: a pointer to a pointer to the linked list
* @index: the index to delete
* Return: 1 (success), -1 (fail)
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *copy;
	unsigned int idx;

	if (*head == NULL)
		return (-1);
	idx = 0;
	copy = *head;
	if (index == 0)
	{
		node = *head;
		*head = node->next;
		free(node);
	}
	else
	{
		while ((idx < index - 1) && (copy != NULL))
		{
			copy = copy->next;
			++idx;
		}
		if (copy)
		{
			node = copy->next;
			copy->next = node->next;
			free(node);
		}
		else
			return (-1);
	}
	return (1);
}
