#include <stdio.h>
#include "main.h"

int sum_natural(void);

/**
* main - Entry Point
* Return: 0 (Success)
*/
int main(void)
{
	printf("%d", sum_natural());
	return (0);
}

/**
* sum_natural - sum the multiples of 3 and 5 below 1024
* Return: total of sum
*/
int sum_natural(void)
{
	int sum;
	int i;

	sum = 0;
	for (i = 0; i < 1024; i++)
		if (i % 5 == 0 || i % 3 == 0)
			sum += i;

	return (sum);
}
