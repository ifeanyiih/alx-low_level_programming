#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer to head of a dlist
 * @n: data
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *trav;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (node);
	node->n = n;
	if (*head == NULL)
	{
		node->next = NULL;
		node->prev = *head;
		*head = node;
		return (node);
	}
	trav = *head;
	while (trav->next != NULL)
		trav = trav->next;
	node->next = trav->next;
	node->prev = trav;
	trav->next = node;

	return (node);
}
