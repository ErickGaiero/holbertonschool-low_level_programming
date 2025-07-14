#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - Duplicate a string
 *@str: String
 *Return: Return string duplicated
 */

char *_strdup(char *str)
{

	char *a;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; str[len] != '\0'; len++)
	{
		continue;
	}

	a = malloc(sizeof(char) * len + 1);

	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
