#include "main.h"

/**
* print_line - draws a straight line in the terminal
* @n: integer argument
*/
void print_line(int n)
{
	int m;

	m = 1;
	while (m <= n)
	{
		_putchar('_');
		++m;
	}
	_putchar('\n');
}
