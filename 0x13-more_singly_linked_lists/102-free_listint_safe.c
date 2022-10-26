#include "lists.h"

/**
* free_listint_safe - a function that frees a list,
* The function can free a list with a loop
* @h: pointer to pointer to the head of the list
* Return: the size of the list
*/
size_t free_listint_safe(listint_t **h)
{
	size_t size;
	listint_t *copy, *node;

	if (h == NULL)
		return (0);
	if (*h == NULL)
		return (0);
	copy = (*h)->next;
	free(*h);
	*h = NULL;
	while (copy != NULL)
	{
		++size;
		node = copy;
		copy = copy->next;
		free(node);
		node = NULL;
	}
	return (size);
}
