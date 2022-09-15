#include <stdio.h>
#include <math.h>

int is_prime(unsigned int);

/**
* main - Entry Point
* Description: This program finds and prints the largest prime factor
* of the number 612852475143, followed by a new line
* Return: 0 (Success)
*/
int main(void)
{
	unsigned long int num;
	unsigned int max_prime, i;

	num = 612852475143;
	for (i = 2; i <= floor(sqrt(num)); ++i)
		if (is_prime(i))
			max_prime = i;
	printf("%u\n", max_prime);
	return (0);
}


/**
* is_prime - checks if n is prime number
* @n: integer argument to check
* Return: 1 (Success), 0 otherwise
*/
int is_prime(unsigned int n)
{
	unsigned int i;

	for (i = 2; i <= floor(sqrt(n)); i++)
	{
		if (n % i == 0)
			return (0);
	}

	return (1);
}
