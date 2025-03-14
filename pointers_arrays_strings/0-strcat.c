#include "main.h"

/**
 * _strcat - its the principal function
 * @dest: its the string concatenated
 * @src: its the string principal
 * Return: resukt is string concatenated
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

