#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	digit = 48;
	while (digit <= '9')
		putchar(digit++);

	digit = 97;
	while (digit <= 'f')
		putchar(digit++);

	putchar('\n');

	return (0);
}
