#include "main.h"

int test(int, int, int);

/**
* _sqrt_recursion - returns the natural square root of a
* number
*
* @n: the number
* Return: the square root, or -1 if no natural square root
*/
int _sqrt_recursion(int n)
{
	int count;

	if (n <= 0)
		return (-1);
	if (n == 1)
		return (1);
	count = test(n - 1, 1, 1);
	if (count * count == n)
		return (count);
	else
		return (-1);
}


/**
* test - _sqrt_helper
* @n: integer argument
* @count: number of times recursion ran
* @sub: odd number to subtract
* Return: n count times
*/
int test(int n, int count, int sub)
{
	if (n == 0)
		return (count);
	if (n < 0)
		return (-1);
	return (test(n - (sub + 2), count + 1, sub + 2));
}
