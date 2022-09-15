#include "main.h"

/**
* print_diagonal - draws a diagonal line in the terminal
* @n: integer argument
*/
void print_diagonal(int n)
{
	int m;

	for (m = 1; m <= n; ++m)
	{
		int j;

		for (j = 1; j <= m; ++j)
		{
			if (j == m)
				_putchar('\\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
