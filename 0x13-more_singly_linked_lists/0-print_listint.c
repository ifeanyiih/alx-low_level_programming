#include "lists.h"

size_t node_walk(listint_t *h);

/**
* print_listint - prints all elements of a listint_t list
* @h: pointer to listint_t
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	return (1 + node_walk(h->next));
}

/**
* node_walk - walks through nodes in a list
* @h: points to a list node
* Return: the number of nodes
*/
size_t node_walk(listint_t *h)
{
	size_t nn;

	nn = 0;
	if (h == NULL)
		return (0);
	do {
		nn++;
		printf("%d\n", h->n);
		h = h->next;
	} while (h != NULL);
	return (nn);
}
