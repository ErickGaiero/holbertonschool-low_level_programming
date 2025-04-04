#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: largest value in the array
*
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *arr;
	int i, j = 0;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(*arr) * ((max - min) + 1));
	if (arr != NULL)
	{
		for (i = min; i <= max; i++)
		{
			arr[j] = i;
			j++;
		}
		return (arr);
	}
	else
		return (NULL);
}

