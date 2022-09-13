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

			mul = i * j;
			if (j > 0)
			{
				if (mul < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
					if (j < 9)
					{
						_putchar(',');
					}
				}
				else
				{
					_putchar(' ');
					_putchar(mul / 10 + '0');
					_putchar(mul % 10 + '0');
					if (j < 9)
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
