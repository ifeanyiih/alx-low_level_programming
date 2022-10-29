#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index
* @n: pointer to an value
* @index: the index of the bit to set
* Return: 1, if it worked otherwise -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);
	if (index > 64)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
