#include <stdio.h>

/**
 * main - Prints the alphabet in reverse
 *
 * Return: Success
 */
int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
		putchar(l);
	

	putchar('\n');
	return (0);
}
