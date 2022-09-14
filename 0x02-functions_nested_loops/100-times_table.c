#include "main.h"

void print_numbers(int n);

/**
* print_times_table - prints the multiplication table
* @n: integer argument
*/
void print_times_table(int n)
{
	int i, j;

	for (i = 0; i <= n && n >= 0 && n <= 15; ++i)
	{
		for (j = 0; j <= n; ++j)
		{
			if (j == 0)
				_putchar('0')
			else
				print_numbers(i * j);

			if (j != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}

/**
* print_numbers - prints number into a given multiplicaiton table
* @n: integer argument
* Retur: void
*/
void print_numbers(int n)
{
	if (n < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n < 100)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar(n % 10 + '0');
	}
}
