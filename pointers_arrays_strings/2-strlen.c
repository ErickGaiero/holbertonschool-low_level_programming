#include "main.h"

/**
 *_strlen - principal function
 *@s: its the poniter variable that containt the array of n
 *@n: its the counter
 */

int _strlen(char *s)
{

	int n = 0;

	while (s[n] != '\0')
		n++;
	return (n);

}
