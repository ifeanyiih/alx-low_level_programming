#include "lists.h"

/**
* reverse_listint - reverses a listint_t linked list
* @head: a pointer to a pointer to listint_t
* Return: a pointer to first node of reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *copy, *node;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (NULL);
	copy = *head;
	*head = (*head)->next;
	copy->next = NULL;
	while ((*head)->next != NULL)
	{
		node = *head;
		*head = (*head)->next;
		node->next = copy;
		copy = node;
	}
	(*head)->next = copy;
	return (*head);
}
