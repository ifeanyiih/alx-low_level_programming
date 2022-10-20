#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_list - prints all the element of a list
* @h: a pointer to a type of list_t
* Return: return the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	while (h->next != NULL)
	{
		printf("[%d] %s\n", h->len, (h->str == NULL) ? "(nil)" : h->str);
		++i;
		h = h->next;
	}
	return (i);
}
