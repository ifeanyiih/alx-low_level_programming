#include "main.h"

/**
* print_times_table - prints the multiplication table
* @n: integer argument
*/
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n; ++i)
	{
		for (j = 0; j <= n; ++j)
		{
			int mul;

			mul = i * j;
			if (j > 0)
			{
				if (mul < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
					if (j < n)
					{
						_putchar(',');
					}
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(mul / 10 + '0');
					_putchar(mul % 10 + '0');
					if (j < n)
					{
						_putchar(',');
					}
				}
			}
			else
			{
				_putchar(i * j + '0');
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}
