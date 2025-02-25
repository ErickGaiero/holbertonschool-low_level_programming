#include "main.h"

/**
* print_diagonal - function that draws a diagonal line on the terminal.
* @n: the int for the paramaters of my function
* Return: 0
*/

void print_diagonal(int n)
{
	int a = 0;
	int b = 0;

	if (n > 0)
	{

		for (a = 0; a < n; a++)
		{

			for (b = 0; b < a; b++)
			{
				_putchar(' ');

		
			}

		b = 0;
		_putchar('\\');
		_putchar('\n');

		}

	}
	else
	{
		_putchar('\n');

}
