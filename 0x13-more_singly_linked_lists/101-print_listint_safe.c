#include "lists.h"

listint_t *check_loop(listint_t *head);
listint_t *start_loop(listint_t *p, listint_t *head);

/**
* print_listint_safe - prints a listint_t linked list
* @head: the start of the list
* Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	listint_t *cpy, *sl;
	size_t nn;

	if (head == NULL)
		return (0);
	cpy = head->next;
	nn = 1;
	sl = check_loop(cpy);
	printf("[%p] %d\n", (void *)head, head->n);
	if (head->next == head)
		return (nn);
	if (cpy->next == head)
	{
		++nn;
		printf("[%p] %d\n", (void *)cpy, cpy->n);
		return (nn);
	}
	if (sl)
	{
		sl = start_loop(sl, cpy);
		do {
			++nn;
			printf("[%p] %d\n", (void *)cpy, cpy->n);
			cpy = cpy->next;
		} while (cpy != sl->next);

		while (cpy != sl)
		{
			++nn;
			printf("[%p] %d\n", (void *)cpy, cpy->n);
			cpy = cpy->next;
		}
	}
	else
	{
		do {
			++nn;
			printf("[%p] %d\n", (void *)cpy, cpy->n);
			cpy = cpy->next;
		} while (cpy != NULL);
	}
	return (nn);
}


/**
* check_loop - checks if a linked list contains a loop
* @head: head of the linked list
* Return: a poiner to a node in the linked list
*/
listint_t *check_loop(listint_t *head)
{
	listint_t *p = head;
	listint_t *q = head;

	while (p && q && q->next)
	{
		p = p->next;
		q = q->next->next;
		if (p == q)
			return (p);
	}
	return (NULL);
}


/**
* start_loop - finds the start of a loop in a linked list
* @p: a node in the loop part of the list
* @head: the head of the linked list
* Return: a pointer to the start of the loop, or NULL
*/
listint_t *start_loop(listint_t *p, listint_t *head)
{
	listint_t *q = head;

	while (p != q)
	{
		p = p->next;
		q = q->next;
	}
	return (p);
}
