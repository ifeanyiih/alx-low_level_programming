#include "main.h"

/**
* get_bit - return the value of a bit at a given index
* @n: integer argument
* @index: the index to return the bit value from
* Return: the bit value or -1 if error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
