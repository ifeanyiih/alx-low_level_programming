#include <stdio.h>

/**
* main - Entry Point
* Description: A program that prints the largest
* prime factor of a given number
* Return: 0 (Success)
*/
int main(void)
{
	unsigned long int primef, i;

	primef = 612852475143;
	primef = 9007199254740991;
	for (i = 2; i < primef; ++i)
		if (primef % i == 0)
			primef /= i;
	printf("%li\n", primef);
	return (0);
}
