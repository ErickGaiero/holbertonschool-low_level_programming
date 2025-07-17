#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - Print numbers in a range of a numbers
 *@min: Min number
 *@max: Max number
 *Return: Array of any numbers
 */

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
