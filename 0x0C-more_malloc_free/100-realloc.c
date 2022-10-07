#include "main.h"
#include <stdlib.h>
#include <string.h>

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
	void *p;

	if (new_size == old_size)
		return (ptr);
	if (ptr && new_size == 0)
	{
		free(ptr);
		exit(98);
	}
	if (ptr == NULL && new_size)
		p = malloc(new_size);
	else
		p = malloc(new_size);
	if (!p)
		exit(98);
	free(ptr);
	if (ptr)
		memcpy(p, ptr, old_size);
	return (p);
}

