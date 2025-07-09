#include "main.h"
#include <stdio.h>

/**
 *_memcpy - Copy the mem
 *@dest: Coppy
 *@src: Entry point
 *@n: Number of repeat
 *Return: Return the copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int  i;

	for (i = 0; i < n; i++)
	{

		dest[i] = src[i];

	}

	return (dest);
}
