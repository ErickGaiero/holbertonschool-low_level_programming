#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - Create a array of chars
 *@size: Size of array
 *@c: Character
 *Return: Return the array
 */

char *create_array(unsigned int size, char c)
{

	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
