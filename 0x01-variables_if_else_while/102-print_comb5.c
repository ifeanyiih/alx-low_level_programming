#include <stdio.h>

/**
* main - Entry Point
*
* Return: Always 0 (success)
*/
int main(void)
{
	int d1;
	int d2;
	int d3;
	int d4;

	d4 = 49;
	for (d1 = 48; d1 <= '9'; ++d1)
	{
		for (d2 = 48; d2 <= '9'; ++d2)
		{
			if (d2 == '9' && d1 == '9')
				break;
			for (d3 = 48; d3 <= '9'; ++d3)
			{
				for (d4 = 49; d4 <= '9'; ++d4)
				{
					putchar(d1);
					putchar(d2);
					putchar(' ');
					putchar(d3);
					putchar(d4);
					if (!(d1 == '9' && d2 == '8' && d3 == '9' && d4 == '9'))
					{
						putchar(',');
						putchar(' ');
					}
					++d4;
				}
				d4 = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
