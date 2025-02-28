#include "main.h"

/**
 *_puts - Its the principal function
 *@str: string
 */

void _puts(char *str)
{

	int n = 0;

	while (*(str + n) != 0)
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');

}
