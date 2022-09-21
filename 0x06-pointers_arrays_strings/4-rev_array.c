#ifndef MAIN_H
	#define MAIN_H "main.h"
	#include MAIN_H
#endif

/**
* reverse_array - reverses the content
* of an array of integers* @a: a pointer to int
* @n: number of elements of array a
*/
void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0;
	j = n - 1;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		++i;
		--j;
	}
}
