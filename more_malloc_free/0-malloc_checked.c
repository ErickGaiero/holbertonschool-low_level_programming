#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - Its the principal function
 * @b: Number of bytes to allocate
 *
 * Return: Pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
	exit(98);
	}

	return (ptr);
}
