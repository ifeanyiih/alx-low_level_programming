#include "lists.h"

/**
* free_listint - frees a listint_t list
* @head: pointer to the list head
*/
void free_listint(listint_t *head)
{
	listint_t *node;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			node = head;
			head = head->next;
			free(node);
		}
		free(head);
	}
}
