#include "main.h"
/**
 *times_table - prints the 9 times table
*/
void times_table(void)
{
	char a, b, r;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			r = a * b;
			if (r <= 9)
			{
				if (r > 0 || (a == 0 && b != 0))
					_putchar(' ');
			} else
			{
				_putchar((r / 10) + '0');
			}
			_putchar((r % 10) + '0');
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
