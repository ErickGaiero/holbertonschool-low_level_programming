#include <stdio.h>
#include "main.h"

/**
 *puts_half - Print second half of a string
 *@str: String
 */


void puts_half(char *str)
{

	int i, n;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	i = i / 2;

	for (n = i; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}

	_putchar('\n');
}
