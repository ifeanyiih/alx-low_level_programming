#include "lists.h"

size_t next(list_t *n);

/**
* list_len - returns the number of elements in a linked list
* @h: a pointer to a linked list
* Return: number of elements
*/
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + next(h->next));
}

/**
* next - moves through a linked list
* @n: a pointer to a list element
* Return: number of elements
*/
size_t next(list_t *n)
{
	size_t i;

	if (n == NULL)
		return (0);
	i = 1;
	while (n->next != NULL)
	{
		++i;
		n = n->next;
	}
	return (i);
}

