#include "lists.h"

/**
* free_listint2 - frees a listint_t list
* @head: pointer to the list head
*/
void free_listint2(listint_t **head)
{
	listint_t *node, *copy;

	if (*head != NULL)
	{
		copy = *head;
		while (copy->next != NULL)
		{
			node = copy;
			copy = copy->next;
			free(node);
		}
		free(copy);
		*head = NULL;
	}
}
