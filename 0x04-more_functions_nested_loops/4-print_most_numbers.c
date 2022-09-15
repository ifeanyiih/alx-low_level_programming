#include "main.h"

/**
* print_most_numbers - prints numbers from 0 to 9, excluding 2 and 4.
*/
void print_most_numbers(void)
{
	int i = 0;

	for (; i <= 9; ++i)
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');

	_putchar('\n');
}
