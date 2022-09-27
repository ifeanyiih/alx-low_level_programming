#include <stdio.h>
#include <ctype.h>
#include "main.h"

void buffer(char *b, int size);

/**
* print_buffer - prints a buffer
* @b: the string buffer
* @size: integer argument
*/
void print_buffer(char *b, int size)
{
	if (size <= 0)
		putchar('\n');
	else
		buffer(b, size);
}

/**
* buffer - The buffer to print
* @b: the string
* @size: size of the buffer
*/
void buffer(char *b, int size)
{
	int i, j, count;

	i = 0;
	while (i < size)
	{
		printf("%.8x: ", i);
		j = i;
		count = 0;
		while (j < size && count < 10)
		{
			printf("%.2x", *(b + j));
			if (count % 2 == 1)
				putchar(' ');
			++j;
			++count;
		}

		while (count < 10)
		{
			putchar(' ');
			putchar(' ');
			if (count % 2 == 1)
				putchar(' ');
			++count;
		}

		j = i;
		count = 0;
		while (j < size && count < 10)
		{
			if (!isprint(*(b + j)))
				putchar('.');
			else
				putchar(*(b + j));
			++j;
			++count;
		}
		putchar('\n');
		i += 10;
	}

}
