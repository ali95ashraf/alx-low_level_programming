#include "main.h"

/**
 * times_table - prints the 9 times table
 * Example Table:
 * 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
 * 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 * ...
 * 0, 9, 18, 27, 36, 45, 54, 63, 72, 81
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			prod = num * mult;
			if (mult > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (prod <= 9)
			{
				_putchar(' ');
				_putchar(prod + '0');
			}
			else
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

