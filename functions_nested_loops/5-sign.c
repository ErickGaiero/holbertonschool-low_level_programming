#include "main.h"

/**
 * print_sign - Print numbers simbols
 * @n: Is the variable
 * Return: 1 if number is positive, -1 if number is negative, 0 is zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		_putchar ('0');
		return (0);
	}
}
