#include <stdio.h>
#include "main.h"

/**
 *_puts - Print a String
 *@str: string
 */

void _puts(char *str)
{

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
