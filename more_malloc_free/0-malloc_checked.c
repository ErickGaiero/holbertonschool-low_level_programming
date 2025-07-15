#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - Return the allocate memory whit malloc
 *@b: Parameter
 *Return: Return the direction of memory
 */


void *malloc_checked(unsigned int b)
{

	char *a;
/*	unsigned int i;*/

	a = malloc(b);
	if (a == NULL)
	{

		exit(98);

	}
	/*for (i = 0; i < b; i++)
	{
		a[i] = b;
	}*/
	return (a);
}
