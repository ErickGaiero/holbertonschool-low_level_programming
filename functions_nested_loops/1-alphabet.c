#include "main.h"

/**
 *print_alphabet - Function that print alphabet whit _putchar
 */

void print_alphabet(void)
{

	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
