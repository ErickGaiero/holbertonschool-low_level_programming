#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Funcion principal
 *
 * Return: Devuelve zero
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf(n "Is positive");
	}
	else if (n < 0)
	{
		printf(n "Is negative");
	} else
	{
		printf("Is zero");
	}
	return (0);
}
