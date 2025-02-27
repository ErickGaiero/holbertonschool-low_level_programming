#include "main.h"

/**
*_strlen - principal function
*@s: containt the array of n
*Return: n for the variable
*/

int _strlen(char *s)
{

	int n = 0;

	while (s[n] != '\0')
		n++;
	return (n);

}
