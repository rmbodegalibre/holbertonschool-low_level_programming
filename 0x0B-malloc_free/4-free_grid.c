#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2-dimensional grid previously created
 * By your function
 * @grid: 2-dimensional array
 * @height: Height of grid
 */
void free_grid(int **grid, int height)
{
	int idx;

	for (idx = 0; idx < height; idx++)
	free(grid[idx]);

	free(grid);
}
