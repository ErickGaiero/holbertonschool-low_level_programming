#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - Concatenate 2 strings
 *@s1: String 1
 *@s2: String 2
 *Return: Final string
 */

char *str_concat(char *s1, char *s2)
{

	char *a;
	int i, j;
	int len1 = 0;
	int len2 = 0;

	if (s1 != NULL)
	{
		for (len1 = 0; s1[len1] != '\0'; len1++)
		{
			continue;
		}
	}

	if (s2 != NULL)
	{
		for (len2 = 0; s2[len2] != '\0'; len2++)
		{
			continue;
		}
	}
	a = malloc(sizeof(char) * (len1 + len2 + 1));
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{

		a[i] = s1[i];

	}

	for (j = 0; j < len2; j++)
	{
		a[i + j] = s2[j];
	}
	a[i + j] = '\0';
	return (a);
}
