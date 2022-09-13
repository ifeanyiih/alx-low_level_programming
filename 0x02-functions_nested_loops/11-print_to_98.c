#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints numbers from n to 98
* @n: integer argument
*/
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n != 98)
			printf("%d, ", n);
		else
			printf("%d\n", n);
	}
}
