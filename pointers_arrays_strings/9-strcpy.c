#include "main.h"
#include <stdio.h>

/**
 *_strcpy - Copy Strings
 *@dest: String copied
 *@src: Input of a String
 *Return: Return copy
 */

char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
