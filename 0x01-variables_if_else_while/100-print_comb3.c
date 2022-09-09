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
	for (d1 = 48; d1 < '9'; ++d1)
	{
		for (d2 = 48; d2 <= '9'; ++d2)
		{
			if (d1 == d2)
			{
				continue;
			}
			else
			{
				putchar(d1);
				putchar(d2);
				if (!(d1 == '8' && d2 == '9'))
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
