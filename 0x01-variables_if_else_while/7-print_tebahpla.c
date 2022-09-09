#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
		putchar(letter--);

	putchar('\n');

	return (0);
}
