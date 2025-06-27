#include <stdio.h>
#include "main.h"

/**
 *swap_int - Swap the numbers of a to b and reverse
 *@a: First number
 *@b: Second number
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
