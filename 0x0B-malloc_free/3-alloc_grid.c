#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return 2D arrays of integers
 * @width: integer
 * @height: integer
 * Return: always success
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0)
	{
		return (NULL);
	}

	if (height <= 0)
	{
		return (NULL);
	}

	grid = (int **) malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)  malloc(width * sizeof(int));
		if ((grid[i]) == NULL)
		{
			for (j = 0; j < width; j++)
			{
				free(grid[j]);
			}

			free (grid);
			return (NULL);
		}
		
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
