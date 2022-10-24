#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t list
* @head: a pointer to a pointer to listint_t
* Description: deletes the head node of a listint_t linked
* list and return the head node's data
* Return: the nodes data
*/
int pop_listint(listint_t **head)
{
	listint_t *copy;
	int n;

	if (*head == NULL)
		return (0);
	copy = *head;
	*head = copy->next;
	n = copy->n;
	free(copy);
	return (n);
}
