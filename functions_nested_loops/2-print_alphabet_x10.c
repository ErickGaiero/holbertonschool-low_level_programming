#include "main.h"

/**
 *print_alphabet_x10 - Function that print alphabet 10 times whit _putchar
 */

void print_alphabet_x10(void)
{

	char letter;
	int cont;

	for (cont = 0; cont <= 10; cont++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
