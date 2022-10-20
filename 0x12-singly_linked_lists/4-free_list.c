#include "lists.h"
#include <stdlib.h>

/**
* free_list - frees a linked list
* @head: the start of the list
*/
void free_list(list_t *head)
{
	list_t *copy;

	if (head != NULL)
	{
		do
		{
			copy = head;
			head = head->next;
			free(copy->str);
			free(copy);
		}
		while (head != NULL);
	}
}
