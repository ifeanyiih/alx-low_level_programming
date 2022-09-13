#include "main.h"

/**
* print_times_table - prints the multiplication table for
* a given integer length
* @n: integer argument
*/
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i < n; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			int mul;
			int rem;

			mul = j * i;
			if (mul < 10 && j != n)
			{
				_putchar(48 + mul);
				_putchar(',');
				_putchar(' ');
			}
			else if (mu > 10 && j != n)
			{
				rem = mul % 10;
				mul /= 10;

				_putchar(48 + mul);
				_putchar(48 + rem);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				rem = mul % 10;
				mul /= 10;

				_putchar(48 + mul);
				_putchar(48 + rem);
			}
		}
	}
}
