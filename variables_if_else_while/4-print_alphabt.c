#include <stdio.h>

/**
 * main - Its the principal function
 *
 * Return: Success
 */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		if (l != 'q' && l != 'e')

		putchar(l);

	putchar('\n');
	return (0);
}
