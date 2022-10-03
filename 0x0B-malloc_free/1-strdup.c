#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _strdup - return a pointer to a string duplicate
* @str: the string to duplicate
* Return: pointer to string duplicate,
* otherwise return NULL if str=NULL
*/
char *_strdup(char *str)
{
	int i;
	char *p;

	i = 0;
	if (str == NULL)
		return (NULL);
	while (*(str + i))
		++i;
	p = malloc(sizeof(char) * ++i);
	if (p == NULL)
		return (NULL);
	i = 0;
	while ((*(p + i) = *(str + i)) != '\0')
		++i;
	return (p);
}
