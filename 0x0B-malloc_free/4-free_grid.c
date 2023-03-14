#include "main.h"
#include <stdlib.h>

/**
 * free_grid - The 2D grid
 * @grid: the gird
 * @height: The height
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
