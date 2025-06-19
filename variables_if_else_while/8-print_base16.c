#include <stdio.h>

/**
 *main - It's the principal function
 *alphabet: Its the variable of alphabet
 *numero: Its the number before alpabet
 *Return: Return zero
 */

int main(void)
{

	char alphabet;
	int numero;

	for (numero = '0'; numero <= '9'; numero++)
	{
		putchar(numero);
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
