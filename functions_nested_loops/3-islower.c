#include "main.h"

/**
 *_islower - If mayus return 0 else return 1
 *@c: Character
 */

int _islower(int c)
{

	if(c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
