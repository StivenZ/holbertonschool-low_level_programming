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

	if (width <= 0 || height <= 0)
		return (NULL);

	i = j = 0;

	grid = malloc(sizeof(int *) * height);
	if (!grid)
		return (NULL);

	while (i < height)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (!grid[i])
			return (NULL);
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
