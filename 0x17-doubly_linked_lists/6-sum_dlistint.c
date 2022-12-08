#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data in a linked list
 * @head: pointer to the head of the list
 * Return: sum otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *node;

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
