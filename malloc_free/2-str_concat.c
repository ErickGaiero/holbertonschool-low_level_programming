#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - its the principal function
 * @s1: source 1
 * @s2: source 2
 * Return: Pointer memory or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *memory;
	int i = 0, j = 0, lengthS1 = 0, lengthS2 = 0, newStrLength;

	if (s1 != NULL)
	{
		while (s1[lengthS1] != '\0')
		{
		lengthS1++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[lengthS2] != '\0')
		{
		lengthS2++;
		}
	}
	newStrLength = lengthS1 + lengthS2 + 1;
	memory = malloc(newStrLength * sizeof(char));
	if (memory == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < lengthS1; i++)
	{
	memory[i] = s1[i];
	}
	for (j = 0; j < lengthS2; j++, i++)
	{
	memory[i] = s2[j];
	}
	memory[i] = '\0';
	return (memory);
}
