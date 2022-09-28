#include "main.h"

int test(int, int);

/**
* _sqrt_recursion - returns the natural square root of a
* number
*
* @n: the number
* Return: the square root, or -1 if no natural square root
*/
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	count = test(n - 1, 1);
	if (count * count == n)
		return (count);
	return (-1);
}


/**
* test - _sqrt_helper
* @n: integer argument
* @count: number of times recursion ran
* Return: n count times
*/
int test(int n, count)
{
	if (n == 0)
		return (count);
	if (n < 0)
		return (-1);
	return (test(n - 2, count + 1));
}
