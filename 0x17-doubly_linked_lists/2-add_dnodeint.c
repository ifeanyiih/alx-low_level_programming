#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to a pointer to the head of the dlist
 * @n: data
 *
 * Return: address of new node or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (node);
	node->n = n;
	if (*head == NULL)
	{
		node->prev = *head;
		node->next = NULL;
		*head = node;
		return (node);
	}
	node->prev = NULL;
	node->next = *head;
	(*head)->prev = node;
	*head = node;

	return (node);
}
