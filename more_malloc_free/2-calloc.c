#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - principal function
 *@nmemb: unsigned int
 *@size: size int
 *Return: return the pointer of the array
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{


	char *ptr;
	unsigned int cont;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	cont = 0;
	while (cont < nmemb * size)
	{
		ptr[cont] = 0;
		cont++;
	}
	return (ptr);


}
