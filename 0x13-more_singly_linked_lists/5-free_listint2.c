#include "lists.h"

/**
* free_listint2 - frees a listint_t list
* @head: pointer to the list head
*/
void free_listint2(listint_t **head)
{
	listint_t *node, *copy;

	if (head)
	{
		if (*head != NULL)
		{
			copy = *head;
			*head = NULL;
			while (copy != NULL)
			{
				node = copy;
				copy = copy->next;
				free(node);
			}
		}
	}
}
