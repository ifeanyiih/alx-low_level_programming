#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2D grid
* @grid: grid to free
* @height: heigt of the 2D grid
*/
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		++i;
	}
	free(grid);
}
