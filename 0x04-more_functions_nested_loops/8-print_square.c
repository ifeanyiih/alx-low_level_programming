#include "main.h"

/**
* print_square - prints a square followed by a new line
* @size: size of a side of the squre
*/
void print_square(int size)
{
	int n;
	int m;

	for (n = 1; n <= size; ++n)
	{
		for (m = 1; m <= size; ++m)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
	if (n <= 0)
		_putchar('\n');
}
