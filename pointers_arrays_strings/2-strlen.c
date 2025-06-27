#include <stdio.h>
#include "main.h"

/**
 *_strlen - Calculate lengt of string
 *@s: String
 *Return: Contador
 */

int _strlen(char *s)
{

	int i = 0;
	int cont = 0;

	while (s[i])
	{
		i++;
		cont++;
	}
	return (cont);
}
