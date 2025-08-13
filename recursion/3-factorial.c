#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * factorial - Factorial of a number
 * @n: Number
 * Return: Factorial of n
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
