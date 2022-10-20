#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
* add_node - adds a new node at the beginning of a list
* @head: the begining of a list
* @str: string to be duplicated
* Return: address of new element, otherwise NULL
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *l;
	unsigned int i;

	l = malloc(sizeof(list_t));
	if (l == NULL)
		return (NULL);
	i = 0;
	while (*(str + i))
		++i;
	l->len = i;
	l->str = strdup(str);
	l->next = *head;
	*head = l;
	return (*head);
}
