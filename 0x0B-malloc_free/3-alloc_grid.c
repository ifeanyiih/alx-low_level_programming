#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - return a pointer to a 2 array of integers
* @width: row size
* @height: col size
* Return: pointer to 2d array,
* NULL on failure, NULL if either width or height is 0
*/
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width == 0 || height == 0)
		return (NULL);
	arr = (int **) malloc(width * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < width; ++i)
	{
		arr[i] = malloc(sizeof(int) * height);
		if (arr[0] == NULL)
			return (NULL);
	}
	for (i = 0; i < width; ++i)
		for (j = 0; j < height; ++j)
			arr[i][j] = 0;
	return (arr);
}
