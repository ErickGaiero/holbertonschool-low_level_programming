#include "main.h"

/**
 *swap_int - its the principal function
 *
 *@a: variable a
 *@b: variable b
 */

void swap_int(int *a, int *b)
{

	int uno = *a;

	*a = *b;
	*b = uno;

}
