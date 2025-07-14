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
	int i;

	if (str == NULL)
	{
		return NULL;
	}
	
	a = malloc(sizeof(char));

	for (i = 0; str[i] != '\0'; i++)
	{
		a[i] = str[i];
	}
	return (a);
}
