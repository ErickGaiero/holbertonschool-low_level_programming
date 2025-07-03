#include "main.h"
#include <stdio.h>

/**
 *rev_string - Reverse the strings
 *@s: String
 */

void rev_string(char *s)
{

	int i, j = 0;
	char a[1000];

	for (i = 0; s[i]; i++)
	{
		;
	}

	i -= 1;

	for (; s[i]; i--)
	{
		a[j] = s[i];
		j++;
	}
	for (i = 0; s[i]; i++)
	{
		s[i] = a[i];
	}
}
