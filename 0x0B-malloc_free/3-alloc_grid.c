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
	int **arr, i, j, fail;

	if (width == 0 || height == 0)
		return (NULL);
	arr = (int **) malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		free((int **) arr);
		return (NULL);
	}
	fail = 0;
	for (i = 0; i < height; ++i)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			fail = 1;
			break;
		}

	}
	if (fail == 1)
	{
		j = 0;
		while(i--)
		{
			while (j < width)
			{
				free((int )arr[i][j]);
			}
		}
		free(arr);
		return(NULL);
	}
	for (i = 0; i < height; ++i)
		for (j = 0; j < width; ++j)
			arr[i][j] = 0;
	return (arr);
}
