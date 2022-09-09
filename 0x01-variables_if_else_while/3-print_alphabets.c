#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	letter = 97;
	while (letter <= 'z')
		putchar(letter++);

	letter = 65;
	while (letter <= 'Z')
		putchar(letter++);

	putchar('\n');

	return (0);
}
