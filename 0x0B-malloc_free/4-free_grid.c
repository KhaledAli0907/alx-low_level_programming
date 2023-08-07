#include <stdlib.h>

/**
 * free_grid - free a 2d array
 *
 * @grid: 2d array
 * @height: array height
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid != NULL && height != 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);

		free(grid);
	}
}
