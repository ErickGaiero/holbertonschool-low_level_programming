#include <stdio.h>
#include "main.h"

/**
 *main - Fizz Buzz
 *Return: Zero in the program final
 */

int main(void)
{

	int i;


	printf("1");
	for (i = 2; i <= 100; i++)
	{

		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %i", i);
		}

	}
	printf("\n");
	return (0);
}
