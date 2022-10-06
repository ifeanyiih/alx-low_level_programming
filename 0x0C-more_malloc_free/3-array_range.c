#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: min value
* @max: max value
* Return: an array containing values from min (included)
* to max(included). if malloc fails return NULL.
* if min > max, return NULL
*/
int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	i = 0;
	while (i <= size)
	{
		arr[i] = min++;
		++i;
	}

	return (arr);
}
