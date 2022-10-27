#include "main.h"

/**
* get_endianness - checks the endianess
* Return: 0 (big endian), 1 (little endian)
*/
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 0x76543210;
	c = (char *) &x;
	if (*c == 0x10)
		return (1);
	else
		return (0);
}
