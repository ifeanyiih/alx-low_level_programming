#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals
* of a square matrix of integers
* @a: the matrix
* @size: the size of the matrix
*/
void print_diagsums(int *a, int size)
{
	int i, j, x, y, fdiag, bdiag;

	i = 0;
	x = 0, y = size - 1;
	fdiag = 0, bdiag = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			if (i == j)
				fdiag += *(a + i * size + j);
			if (i == x && j == y)
			{
				bdiag += *(a + i * size + j);
				++x, --y;
			}
			++j;
		}
		++i;
	}
	printf("%d, %d\n", fdiag, bdiag);
}
