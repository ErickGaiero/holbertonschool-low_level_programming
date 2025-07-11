#include "main.h"
#include <stdio.h>

/**
 *_strpbrk - Find a coincidence of 2 strings
 *@s: String
 *@accept: Phrase to finde the coincidence
 *Return: Dir of memory of Stirng coincidence or nothing
 */

char *_strpbrk(char *s, char *accept)
{

	int i, j;


	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}

	}
	return (0);
}
