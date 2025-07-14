#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - Free malloc
 *@grid: Parameter grid
 *@height: Height of array
 *Return: Return null if grid and height is negative
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
