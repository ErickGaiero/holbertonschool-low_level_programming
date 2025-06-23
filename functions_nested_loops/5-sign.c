#include "main.h"

/**
 * print_sign - Print the sign of the number ingresed
 * @n: Variable of number
 * Return: 1 is positive, 0 is zero and -1 is negative
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
