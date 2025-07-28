#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *more_numbers: Print 1 to 14
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('1');
			}

				_putchar('0' + (j % 10));

		}
		_putchar('\n');
	}
}
