#include "main.h"

/**
 * print_line - function principal
 * @n: is a int
 * Return: 0
 */

void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{
		while (a < n)
		{
			_putchar('_');
			a++;
		}
	 _putchar('\n');
	}
	else
	_putchar('\n');
}
