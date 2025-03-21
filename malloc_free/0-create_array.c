#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * create_array - its the principal function
 * @size: size of malloc
 * @c: its the variable that char c
 * Return: return j
 */
char *create_array(unsigned int size, char c)
{
	char *j;

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	j = malloc(size * sizeof(*j));

	if (j == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		j[i] = c;

	return (j);
}
