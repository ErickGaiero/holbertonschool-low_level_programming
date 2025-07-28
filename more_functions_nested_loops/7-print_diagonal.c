#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_diagonal - Print a line in diagonal
 *@n: Parameter
 *Return: Null if n is negative
 */


void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
