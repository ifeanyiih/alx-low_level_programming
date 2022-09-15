#include <stdio.h>
/**
* main - Entry point for program
* Return: 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0)
			printf("%s", "Fizz");
		if (i % 5 == 0)
			printf("%s", "Buzz");
		if (!(i % 5 == 0 || i % 3 == 0))
			printf("%d", i);

		putchar(' ');
	}
	putchar('\n');

	return (0);
}
