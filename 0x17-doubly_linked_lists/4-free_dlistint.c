#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	if (head != NULL)
		while (head->next != NULL)
		{
			node = head;
			head = head->next;
			node->next = NULL;
			free(node);
			head->prev = NULL;
		}
	free(head);
}
