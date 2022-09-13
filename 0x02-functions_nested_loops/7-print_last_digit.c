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
	_putchar(48 + d);
	return (d);
}
