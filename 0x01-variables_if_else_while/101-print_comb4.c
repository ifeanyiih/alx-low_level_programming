#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d1;
	int d2;
	int d3;

	for (d1 = 48; d1 < '8'; ++d1)
	{
		for (d2 = d1 + 1; d2 < '9'; ++d2)
		{
			for (d3 = d2 + 1; d3 <= '9'; ++d3)
			{
				if (d1 == d2 && d2 == d3)
					continue;

				putchar(d1);
				putchar(d2);
				putchar(d3);

				if (!(d1 == '7' && d2 == '8' && d3 == '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
