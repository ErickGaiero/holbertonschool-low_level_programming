#include "main.h"

/**
 * puts_half - its the principal function
 * @str: string
 */

void puts_half(char *str)
{
	int len = 0;
	int start;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len + 1) / 2;
	}

	for (int i = start; str[i] != '\0'; i++)
	{
	_putchar(str[i]);
	}

	_putchar('\n');
}
