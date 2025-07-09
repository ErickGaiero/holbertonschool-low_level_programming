#include "main.h"
#include <stdio.h>

/**
 *_memset - Return a block of memory
 *@s: Array
 *@b: Byte
 *@n: Bytes to fill
 *Return: Return thee block
 */


char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);

}
