#include "main.h"
#include <stdio.h>

/**
 *puts2 - Print a numbers whit rest zero
 *@str: String
 */

void puts2(char *str)
{

	int i;

	for (i = 0; str[i]; i++)
	{

		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}


	}
	_putchar('\n');
}
