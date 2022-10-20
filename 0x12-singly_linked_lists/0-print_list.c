#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

size_t next(list_t *n);

/**
* print_list - prints all the element of a list
* @h: a pointer to a type of list_t
* Return: return the number of nodes
*/
size_t print_list(const list_t *h)
{
	if (h != NULL)
	{
		printf("[%d] %s\n", h->len, (h->str == NULL) ? "(nil)" : h->str);
		return (1 + next(h->next));
	}
	return (0);
}

/**
* next - traverse a list
* @n: the list to traverse
* Return: the number of nodes
*/
size_t next(list_t *n)
{
	size_t i;

	if (n == NULL)
		return (0);
	i = 1;
	printf("[%d] %s\n", n->len, (n->str == NULL) ? "(nil)" : n->str);
	while (n->next != NULL)
	{
		n = n->next;
		printf("[%d] %s\n", n->len, (n->str == NULL) ? "(nil)" : n->str);
		++i;
	}
	return (i);
}
