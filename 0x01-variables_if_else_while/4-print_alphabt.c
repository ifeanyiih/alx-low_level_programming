#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints lowercase alphabets excluding 'e' and 'q'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	letter = 97;
	while (letter <= 'z')
	{
		if (letter == 'e' || letter == 'q')
		{
			++letter;
			continue;
		}
		else
		{
			putchar(letter++);
		}
	}
	putchar('\n');

	return (0);
}
