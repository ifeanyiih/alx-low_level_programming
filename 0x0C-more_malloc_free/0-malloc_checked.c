#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - returns a pointer to the allocated memory
* @b: memory block size
* Return: pointer to allocated memory, otherwise,
* cause a normal process termination with a status value of 98
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
