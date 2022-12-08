#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: points to the head of the list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int ne;
	dlistint_t *node;

	ne = 0;
	if (h == NULL)
		return (ne);
	++ne;
	node = h->next;
	while (node != NULL)
	{
		++ne;
		node = node->next;
	}
	return (ne);
}
