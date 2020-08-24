#include "holberton.h"
/**
 * alloc_grid - creates a pointer to a 2 dimensional array
 * @width: width size
 * @height: height size
 * Return: pointer or NULL
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	i = j = 0;

	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);

	while (i < width)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (!grid[i][j])
			return (NULL);
		grid[i][j] = 0;
		i++;
	}

	i = 0;
	j = 0;
	while (i < height)
	{
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
