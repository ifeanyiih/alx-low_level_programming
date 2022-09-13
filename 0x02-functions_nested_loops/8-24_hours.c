#include "main.h"

/**
* jack_bauer - prints digital time string.
*/
void jack_bauer(void)
{
	int d1, d2, d3, d4;

	d1 = 48;
	while (d1 <= '2')
	{
		d2 = 48;
		while (d2 <= '9')
		{
			d3 = 48;
			while (d3 <= '5')
			{
				d4 = 48;
				while (d4 <= '9')
				{
					_putchar(d1);
					_putchar(d2);
					_putchar(':');
					_putchar(d3);
					_putchar(d4);
					_putchar('\n');

					++d4;
				}
				++d3;
			}
			++d2;
		}
		++d1;
	}
}

