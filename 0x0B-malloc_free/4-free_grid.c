#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free
 * @grid: array
 * @height: height
 */
void free_grid(int **grid, int height)
{
	free(grid[height]);
	free(grid);
}
