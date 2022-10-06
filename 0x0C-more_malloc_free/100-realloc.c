#include "main.h"
#include <stdlib.h>

/**
* _realloc - reallocates memory
* @ptr: memory to reallocate
* @old_size: old memory size
* @new_size: new memory size
* Description: reallocates a memory block using
* malloc and free
* Return: a pointer to new memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *p;

	p = malloc(new_size);
	if (!p)
		return (NULL);
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	if (new_size == 0 && !(ptr == NULL))
	{
		free(ptr);
		return (NULL);
	}

	i = 0;
	while (i < old_size)
	{
		*((char *)p + i) = *((char *)ptr + i);
		++i;
	}

	free(ptr);
	return (p);
}

