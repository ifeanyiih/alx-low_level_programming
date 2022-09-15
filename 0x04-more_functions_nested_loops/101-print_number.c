#include "main.h"

void print_value(int n);

/**
* print_number - prints an integer
* @n: integer argument
*/
void print_number(int n)
{
	int sign;
	int val;

	sign = -1;
	if (n == 0)
	{
		_putchar('0');
	}
	else if (n < 0)
	{
		val = n * sign;
		_putchar('-');
		print_value(val);
	}
	else
	{
		print_value(n);
	}
}

/**
* print_value - prints integer values for print_number
* @n: integer argument
*/
void print_value(int n)
{
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else if (n < 100)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 1000)
	{
		_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n < 10000)
	{
		_putchar(n / 1000 + '0');
		_putchar((n / 100) % 10 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
