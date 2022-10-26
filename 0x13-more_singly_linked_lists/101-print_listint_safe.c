#include "lists.h"

/**
* print_listint_safe - prints a listint_t linked list
* @head: the start of the list
* Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	listint_t *cpy;
	size_t nn;

	if (head == NULL)
		return (0);
	nn = 1;
	printf("[%p] %d\n", (void *)head, head->n);
	cpy = head->next;
	while (cpy != NULL)
	{
		++nn;
		printf("[%p] %d\n", (void *)cpy, cpy->n);
		cpy = cpy->next;
	}
	return (nn);
}
