#include "main.h"

/**
* flip_bits - returns the number of bits you would flip to get
* from one number to another
* @n: from
* @m: to
* Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;

	count = 0;
	do
	{
		if (!((n & 1) == (m & 1)))
			++count;
		n = n >> 1;
		m = m >> 1;
	} while(n | m);
	return (count);
}
