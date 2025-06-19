#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - It's the principal function
 *ultimo: Last digit
 *Return: Return zero
 */

int main(void)
{
	int n, ultimo;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ultimo = n % 10;

	if (ultimo > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, ultimo);
	}
	else if (ultimo < 6 && ultimo != 0)
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, ultimo);
	}
	else if (ultimo == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, ultimo);
	}

	return (0);
}
