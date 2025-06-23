#include "main.h"

/**
 * _islower - Print 1 and 0 to lower or upper
 * @c: Character
 * Return: return 1 if is mayus return 0 if is lower
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
