#include "main.h"

/**
* print_line - draws a straight line in the terminal
* @n: integer argument
*/
void print_line(int n)
{
	int m;

	m = 0;
	while (m < n)
	{
		_putchar('_');
	}
	_putchar('\n');
}
