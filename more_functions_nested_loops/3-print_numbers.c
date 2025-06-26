#include "main.h"

/**
 *print_numbers - Print numbers of the 0 to 9
 *
 */

void print_numbers(void)
{

	int number;

	for (number = '0'; number <= '9'; number++)
	{

		_putchar(number);

	}

	_putchar('\n');
}
