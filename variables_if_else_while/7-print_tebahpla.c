#include <stdio.h>

/**
 *main - It's the principal function
 *alphabet: Its the variable of alphabet
 *Return: Return zero
 */

int main(void)
{

	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
		putchar(alphabet);
	putchar('\n');

	return (0);
}
