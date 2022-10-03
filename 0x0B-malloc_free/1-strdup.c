#include "main.h"
#include <stdlib.h>

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

	p = malloc(sizeof(str));
	if (p == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	i = 0;
	while ((*(p + i) = *(str + i)) != '\0')
		++i;
	return (p);
}
