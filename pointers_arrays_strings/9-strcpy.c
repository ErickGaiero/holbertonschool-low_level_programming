#include "main.h"

/**
 *_strcpy - its the principal function
 *@dest: site where save the copy of src
 *@src: its the string
 *Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; src[i] != '\0'; i++)
	{

		src[i] = dest[i];

	}

	return (dest);
}
