#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: The size of the triangle
 */

void print_triangle(int size)
{
	int row, space, coso;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (space = size - row; space > 0; space--)
			_putchar(' ');

		for (coso = 0; coso < row; coso++)
			_putchar('#');

		_putchar('\n');
	}
}
