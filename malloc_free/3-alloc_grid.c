#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 *@width: width of the array
 *@height: height of the array
 *Return: Return the Array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = malloc(height * sizeof(int *));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
