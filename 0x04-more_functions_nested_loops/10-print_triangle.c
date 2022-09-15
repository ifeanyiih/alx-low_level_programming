#include "main.h"

/**
* print_triangle - print triangle, followed by a new line
* @size: the size of the triangle
*/
void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; ++i)
	{
		int k;

		for (j = 0, k = j + 1; j < size; ++j)
		{
			if (j < (size - k))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
