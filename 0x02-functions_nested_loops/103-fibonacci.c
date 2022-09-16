#include <stdio.h>

/**
* main - Entry Point
* Description: By considering the terms in the Fibonacci
* sequence whose values do not exceed 4,000,000, write a program that finds
* and prints the sum of the even-valued terms, followed by a new line.
*
* Return: 0 (Success)
*/
int main(void)
{
	unsigned long int n1, n2, sum, i, sum_of_evens;

	n1 = 0;
	n2 = 1;
	sum = n1 + n2;
	sum_of_evens = 0;
	for (i = 0; i < 50; ++i)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;

		if (sum % 2 == 0 && sum < 4000000)
			sum_of_evens += sum;
	}
	printf("%lu\n", sum_of_evens);
	return (0);
}

