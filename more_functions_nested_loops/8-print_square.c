#include "main.h"

/**
* print_square - print square
*
* @size: size
*/

void print_square(int size)

{

	int s = size;

	int i;

	while (size > 0)

	{

		for (i = s; i > 0; i--)

			_putchar ('#');

		if (size != 1)

			_putchar('\n');

		size--;

	}

	_putchar('\n');

}
