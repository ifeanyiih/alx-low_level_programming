#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: points to the head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int nn;
	dlistint_t *node;

	nn = 0;
	if (h == NULL)
		return (nn);
	node = h->next;
	++nn;
	printf("%d\n", h->n);
	while (node != NULL)
	{
		++nn;
		printf("%d\n", node->n);
		node = node->next;
	}

	return (nn);
}
