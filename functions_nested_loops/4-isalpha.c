#include "main.h"

/**
 * _isalpha - checks the lowercases and upercases
 * @c: exist
 * Return: 1 if lowercase or upercase, 0 Dosn't is lowercase
 */

int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);

	}
	else
	{
		return (0);
	}
}
