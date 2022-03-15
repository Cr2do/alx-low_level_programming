#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 */

void times_table(void)
{
	int i, k, value0, value1, value2;

	while (k <= 9)
	{
		for (i = 0; i <= 9; i++)
		{
			value0 = i * k;
			value1 = value0 / 10;
			value2 = value0 % 10;
			if (i <= 8)
			{
				if (value0 >= 10)
				{
					_putchar(value1 + '0');
					_putchar(value2 + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(value0 + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else if (i == 9)
			{
				if (value0 >= 10)
				{
					_putchar(value1 + '0');
					_putchar(value2 + '0');
					_putchar('\n');
				}
				else
				{
					_putchar(value0 + '0');
					_putchar('\n');
				}
			}
		}
		k++;
	}
}
