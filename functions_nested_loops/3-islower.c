#include "main.h"

/**
 * _islower - checks the lowercases
 * @c: exist
 * Return: 1 if lowercase, 0 Dosn't is lowercase
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);

	}
	else
	{
		return (0);
	}
}
