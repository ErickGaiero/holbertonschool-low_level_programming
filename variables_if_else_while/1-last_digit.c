#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Es la funcion principal
 *
 * Return: Completado
 */
int main(void)
{
	int n, ultd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ultd = n % 10;

	if (ultd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ultd);
	}
	else if (ultd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ultd);
	}
	else if (ultd < 6 && ultd != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ultd);
	}

	return (0);
}
