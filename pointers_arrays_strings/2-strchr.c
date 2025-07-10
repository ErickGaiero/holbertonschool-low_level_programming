#include "main.h"
#include <stdio.h>

/**
 *_strchr - Locate a char in string
 *@s: String
 *@c: Character
 *Return: Return string or notingh
 */

char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (0);

}
