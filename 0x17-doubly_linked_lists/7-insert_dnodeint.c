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
	dlistint_t *node, *m;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (node);
	node->n = n;
	m = *h;
	if (idx == 0)
	{
		node->next = m;
		node->prev = NULL;
		if (m)
			m->prev = node;
		*h = node;
		return (node);
	}
	else
	{
		i = 0;
		while (i++ < idx - 1 && (m != NULL))
			m = m->next;
		if (m)
		{
			node->next = m->next;
			m->next = node;
			node->prev = m;
			return (node);
		}
		else
		{
			free(node);
			return (NULL);
		}
	}
	return (node);
}
