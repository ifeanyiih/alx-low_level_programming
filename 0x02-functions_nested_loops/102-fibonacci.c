#include <stdio.h>

/**
* main - Entry Point
* Description: A program that prints the first 50 Fibonacci numbers,
* starting with 1 and 2 Followed by a new line
* Return: 0 (Success)
*/
int main(void)
{
	unsigned long int n1, n2, sum, i;

	n1 = 0;
	n2 = 1;
	sum = n1 + n2;

	for (i = 0; i < 50; ++i)
	{
		sum = n1 + n2;
		printf("%lu", sum);
		n1 = n2;
		n2 = sum;
		if (i < 50 - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

