#include "lists.h"

/**
* add_nodeint - adds a new node
* @head: head of a list
* @n: value to add
* Description: Adds a new node at the beginning of a list
* Return: the address of the new element
* or NULL if it fails.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		node->next = *head;
		*head = node;
	}
	return (node);
}

