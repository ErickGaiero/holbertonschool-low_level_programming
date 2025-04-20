#include "main.h"

/**
 * _atoi - Its the principal function.
 * @s: String
 * Return: String result.
 */

int _atoi(char *s)
{
	int index = 0;
	int sign = 1;
	int result = 0;
	int started = 0;

	while (s[index] != '\0')
	{
		if (s[index] == '-')
		{
			sign *= -1;
		}
		else if (s[index] >= '0' && s[index] <= '9')
		{
			result = result * 10 + (s[index] - '0');
			started = 1;
		}
		else if (started)
		{
		break;
		}
		index++;
	}

	return (result * sign);
}
