#ifndef MAIN_H
	#define MAIN_H "main.h"
#endif
#include MAIN_H
#include <stdio.h>

/**
* print_array - print n elements of an array of integers,
* followed by a new line
* @a: pointer to int
* @n: integer argument
*/
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf("%s", ", ");
		++i;
	}

	putchar('\n');
}
