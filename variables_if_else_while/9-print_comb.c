#include <stdio.h>

/**
  * main - Its the principal function
  *
  * Return: Success
  */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);

		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
