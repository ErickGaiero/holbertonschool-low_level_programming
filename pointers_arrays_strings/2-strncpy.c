#include "main.h"

/**
 * *_strcpy - its the principal function
 * @dest: destiny
 * @src: sourse
 * Return: Pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
