#include "main.h"

/**
 * print_rev - Its the principal function
 *@s: string
 */

void print_rev(char *s)
{
	int n = 0, contador = 0;


	while (*(s + n) != 0)
	{
		contador++;
		n++;
	}
	while (contador > 0)
	{
		contador--;
		_putchar(*(s + contador));
	}
	_putchar('\n');
}
