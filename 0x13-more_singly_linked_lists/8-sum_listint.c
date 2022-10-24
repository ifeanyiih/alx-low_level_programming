#include "lists.h"

/**
* sum_listint - return the sum of data in a linked list
* @head: pointer to the start of the linked list
* Description: a function that returns the sum of all the
* data (n) of a listint_t linked list
* Return: sum, otherwise 0
*/
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *node;

	if (head == NULL)
		return (0);
	node = head;
	sum = 0;
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
