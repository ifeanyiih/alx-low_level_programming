#include "main.h"

/**
* print_last_digit - returns the last digit of a given number
* @num: integer variable
*
* Return: last digit
*/
int print_last_digit(int num)
{
	int d;

	d = num % 10;
	if (d < 0)
	{
		d *= -1;
	}
	_putchar('0' + d);

	return (d);

}
