#include "main.h"

int prime_test(x, y);

/**
* is_prime_number - tests if a number is a prime number
* @n: number to test
* Return: 1 if number is prime, 0 otherwise
*/
int is_prime_number(int n)
{
	return (prime_test(n, n / 2));
}

/**
* prime_test - recursive check if number is prime
* @x: number
* @y: number / 2
* Return: 1 for pass, 0 otherwise
*/
int prime_test(x, y)
{
	if (y == 0)
		return (1);
	if (x % y == 0)
		return (0);
	return (prime_test(x, y - 1));
}
