#include "holberton.h"
/**
 * free_grid - frees a 2 dimension grid
 * @grid: double pointer to grid
 * @height: height of the grid
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
