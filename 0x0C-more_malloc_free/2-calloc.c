#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocate memory for an array using malloc
* @nmemb: number of elements in the array
* @size: the size of the type of the array elements
* Return: pointer to allocated memory, otherwise
* return NULL on failure
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (size == 0 || nmemb == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	for (i = 0; i < nmemb; ++i)
		*(p + i) = 0;
	return (p);
}
