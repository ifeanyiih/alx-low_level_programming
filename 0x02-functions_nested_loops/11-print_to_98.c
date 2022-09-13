#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints numbers from n to 98
* @n: integer argument
*/
void print_to_98(int n)
{
	int i;

	i = n;
	while (i <= 98)
	{
		if (i != 98)
			printf("%d, ", i);
		else
			printf("%d\n", i);
		++i;
	}

	i = n;
	while (i >= 98)
	{
		if (i != 98)
			printf("%d, ", i);
		else
			printf("%d\n", i);
		--i;
	}
}
