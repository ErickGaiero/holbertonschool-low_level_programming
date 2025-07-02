#include "main.h"
#include <stdio.h>

/**
 *print_rev - Print a String in reverse
 *@s: String
 */


void print_rev(char *s)
{


	int i, length;

	for (i = 0; s[i]; i++)
	{
		length++;
	}

	for (i = length - 1; i >= 0; i--)
	{

		_putchar(s[i]);

	}
	_putchar('\n');
}
