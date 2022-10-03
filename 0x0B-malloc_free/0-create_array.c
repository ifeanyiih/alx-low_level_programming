#include <stdlib.h>
#include "main.h"

/**
* create_array - create an array of chars.
* @size: the size of the array
* @c: the character to initialize it with.
* Return: NULL if size = 0, otherwise a pointer to the array
* or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size <= 0)
		return (NULL);

	p = malloc(size * (sizeof(char)));
	if (p == NULL)
		return (p);
	i = 0;
	while (i < size)
		p[i++] = c;
	return (p);
}
