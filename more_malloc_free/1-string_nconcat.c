#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat - Concatenate two Strigns
 *@s1: String one
 *@s2: String two
 *@n: Number of bytes to print
 *Return: String concatenated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len1 = 0, len2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}

	for (i = 0; s2[i] != '\0'; i++)
	{
		len2++;
	}

	if (n >= len2)
	{
		n = len2;
	}

	s3 = malloc(len1 + n + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		s3[i + j] = s2[j];
	}
	s3[i + j] = '\0';
	return (s3);
}
