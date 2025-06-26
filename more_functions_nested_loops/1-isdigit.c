#include "main.h"

/**
 *_isdigit - Return 1 if is digit and 0 if not is
 *@c: Character
 *Return: 1 is ok
 */

int _isdigit(int c)
{

	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
