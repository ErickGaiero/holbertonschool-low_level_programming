#include "main.h"
/**
* print_most_numbers - print numbers from 0 to 9 using a for loop
*/

void print_most_numbers(void)
{
	int numero;


	for (numero = 0; numero <= 9; numero++)
{
		if (numero != 2 && numero != 4)

		{

		_putchar(numero + '0');

		}

}

		_putchar('\n');

}
