#include "main.h"
/**
 * print_triangle - print triangle with height n
 *
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int s = size;
	int i, c;

	c = 1;
	while (s > 0)
	{
		for (i = 0; i < size; i++)
			if (size - c <= i)
			{
				_putchar('#');
			} else
			{
				_putchar(' ');
			}
		if (s != 1)
			_putchar('\n');
		c++;
		s--;
	}
	_putchar('\n');
}
