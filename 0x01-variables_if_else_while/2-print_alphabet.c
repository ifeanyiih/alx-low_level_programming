#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints the alphabet in lowercase, using putchar() function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	letter = 97;

	while (letter <= 'z')
	{
		putchar(letter);
		++letter;
	}
	putchar('\n');

	return (0);
}
