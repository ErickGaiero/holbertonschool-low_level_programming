#include "main.h"
#include <stdio.h>

/**
 *_strstr - Find and print the coincidence
 *@haystack: Parameter
 *@needle: Another parameter
 *Return: Return the word or nothing
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
		s++;

	while (*haystack)
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (haystack[i] != needle[i])
			{
				break;
			}
		}
		if (i != s)
		{
			haystack++;
		}
		else
		{
			return (haystack);
		}
	}
	return (0);
}
