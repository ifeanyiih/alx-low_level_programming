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
	dlistint_t *node, *mv, unsigned int i;

	if (h == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (node);
	node->n = n;
	mv = *h;
	i = 0;
	while (i < idx && mv != NULL && mv->next != NULL)
		++i, mv = mv->next;
	if (i == idx && node != NULL)
	{
		node->next = mv;
		if (mv == NULL)
		{
			node->prev = NULL;
			*h = node;
		}
		else
		{
			if (mv->prev != NULL)
				mv->prev->next = node;
			else
				*h = node;
			node->prev = mv->prev;
			mv->prev = node;
		}
	}
	else if (i == idx - 1 && node != NULL)
	{
		node->prev = mv;
		mv->next = node;
		node->next = NULL;
	}
	else
		free(node), return (NULL);
	return (node);
}
