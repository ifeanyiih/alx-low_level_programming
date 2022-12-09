#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to head of the list
 * @idx: the index to add to
 * @n: the data
 * Return: Address of new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *mv;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (node);
	node->n = n;

	i = 0;
	mv = *h;
	while (i < idx && mv != NULL)
	{
		++i;
		mv = mv->next;
	}
	if (mv == NULL && idx == 0)
	{
		node->next = NULL;
		node->prev = NULL;
		*h = node;
		return (node);
	}
	if (i == idx)
	{
		node->next = mv;
		node->prev = mv->prev;
		mv->prev->next = node;
		mv->prev = node;
		return (node);
	}
	return (NULL);
}
