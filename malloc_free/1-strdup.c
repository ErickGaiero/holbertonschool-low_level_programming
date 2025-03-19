#include "main.h"
#include <stdio.h>

/**
* _strdup - its the principal function
*@str: string
*Return: NULL in case of error or the result of c
*/

char *_strdup(char *str)
{
	char *c;
	int i, len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;
	c = malloc(sizeof(char) * (len + 1));

	if (c == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		c[i] = str[i];
	}

	c[len] = '\0';

	return (c);

}
