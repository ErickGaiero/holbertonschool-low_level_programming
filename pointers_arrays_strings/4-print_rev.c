#include "main.h"
#include <stdio.h>

/**
 *print_rev - Print a String in reverse
 *@s: String
 */


void print_rev(char *s)
{


	int i;

	for (i = 0; s[i]; i++)
	{
		continue;
	}
	i -= 1;
	for (; i >= 0; i--)
	{

		_putchar(s[i]);

	}
	_putchar('\n');
}
