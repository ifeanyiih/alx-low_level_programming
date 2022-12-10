#include "lists.h"
void ins_item(dlistint_t *node, dlistint_t *it, dlistint_t **h);

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
	mv = *h;
	i = 0;
	while (i < idx && mv != NULL && mv->next != NULL)
		++i, mv = mv->next;
	if (i == idx && node != NULL)
		ins_item(node, mv, h);
	else if (i == idx - 1 && node != NULL)
	{
		node->prev = mv;
		mv->next = node;
		node->next = NULL;
	}
	else
	{
		free(node);
		return (NULL);
	}
	return (node);
}

/**
 * ins_item - handles the inserting of a node at index in a list
 * @node: the node to insert
 * @it: an iterator to iterate the doubly linked list
 * @h: a pointer to the pointer to the head of the list
 */
void ins_item(dlistint_t *node, dlistint_t *it, dlistint_t **h)
{
	node->next = it;
	if (it == NULL)
	{
		node->prev = NULL;
		*h = node;
	}
	else
	{
		if (it->prev != NULL)
			it->prev->next = node;
		else
			*h = node;
		node->prev = it->prev;
		it->prev = node;
	}
}
