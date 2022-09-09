#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	digit = 0;
	while (digit < 10)
		printf("%d", digit++);
	putchar('\n');

	return (0);
}
