#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements
 * @size: Size of the element
 * Return: Pointer to mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int total, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;

	mem = malloc(total);
	if (mem == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		mem[i] = 0;

	return (mem);
}
