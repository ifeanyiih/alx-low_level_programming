#include "main.h"

/**
* times_table - prints the multiplication table
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			int mul;
			int rem;

			mul = j * i;
			if (mul < 10 && j != 9)
			{
				_putchar(48 + mul);
				_putchar(',');
				_putchar(' ');
			}
			else if (mul > 10 && j != 9)
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
