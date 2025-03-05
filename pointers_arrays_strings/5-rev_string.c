#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 *rev_string - its the principal function
 *@str: its the string variable
 */

void rev_string(char *str)
{
	int length = strlen(str);

	int i;

	for (i = 0; i < length / 2; i++)
	{	
		char temp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;

	}
}
