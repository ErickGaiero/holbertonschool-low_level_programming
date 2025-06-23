#include "main.h"

/**
 * _isalpha - Print 1 and 0 if is letter or num
 * @c: Character
 * Return: return 1 if is letter return 0 if is num
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
