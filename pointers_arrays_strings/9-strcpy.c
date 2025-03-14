#include "main.h"
#include<stdlib.h>
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
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
