#include "main.h"

/**
 * _atoi - Its the principal function
 * @s: string
 * Return: Result
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int started = 0;
	int digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && !started)
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{

			digit = s[i] - '0';

			result = result * 10 - digit;
			started = 1;
		}
		else if (started)
		{
			break;
		}
		i++;
	}

	return (result * -sign);
}

