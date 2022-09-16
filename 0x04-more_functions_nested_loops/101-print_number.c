#include "main.h"
#include <limits.h>

/**
* print - print an integer one character at a time
* @n: integer argument
*/
void print(int n)
{
	int digits, m, rev;

	digits = 0;
	if (n < 0)
	{
		_putchar('-');
		if (n == INT_MIN)
		{
			m = n / 1000000000 * -1;
			n = n % 1000000000;
			_putchar(m + '0');
		}
		n *= -1;
	}
	if (n == INT_MAX)
	{
		m = n / 1000000000;
		n = n % 1000000000;
		_putchar(m + '0');
	}
	rev = 0;
	while (n)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
		digits++;
	}

	while (digits--)
	{
		_putchar(rev % 10 + '0');
		rev /= 10;
	}
}




/**
* print_number - prints an integer
* @n: integer argument
*/
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else
		print(n);
}


