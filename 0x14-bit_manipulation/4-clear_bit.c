#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: pointer to value
* @index: index of bit to clear
* Return: 1 on success, -1 otherwise
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	*n = (*n ^ (1 << index)) & ~(1 << index);
	return (1);
}
