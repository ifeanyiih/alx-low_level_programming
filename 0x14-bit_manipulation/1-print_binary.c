#include "main.h"

void prnt_bin(unsigned long int n);

/**
* print_binary - prints the binary representation of a number
* @n: the number
*/
void print_binary(unsigned long int n)
{
	if (n > 0)
		prnt_bin(n);
	else if (n == 0)
		_putchar('0');
}


/**
* prnt_bin - prints 0 or 1
* @n: integer argument
*/
void prnt_bin(unsigned long int n)
{
	if (n == 0)
		return;
	prnt_bin(n >> 1);
	_putchar((n & 1) + '0');
}
