#include "lists.h"

/**
* add_nodeint_end - adds a new node to list
* @head: pointer to head of list
* @n: value to insert at node
* Description: adds a new node at the end of a listint_t list
* Return: the address of node, otherwise NULL
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *copy;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		copy = *head;
		while (copy->next)
		{
			copy = copy->next;
		}
		copy->next = node;
	}
	return (node);
}
