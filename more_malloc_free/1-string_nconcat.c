#include <stdlib.h>

/**
 * string_nconcat - Its then principal function
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes to concatenate from s2.
 *
 * Return: Result
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int i, j, len1 = 0, len2 = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n > len2)
		n = len2;

	result = malloc(len1 + n + 1);
	if (result == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		result[i + j] = s2[j];

	}

	result[i + j] = '\0';

	return (result);
}
