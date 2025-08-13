#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: Pointer to the string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
