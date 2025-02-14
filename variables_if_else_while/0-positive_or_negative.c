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
		printf("%d Is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d Is negative\n", n);
	} else
	{
		printf("%d Is zero\n", n);
	}
	return (0);
}
