#include "holberton.h"
/**
 *times_table - this function print the 9 time table.
 *return: a table of 9*9
 */
void times_table(void)
{
	int x = 0;
	int z = 0;

	while (z <= 9)
	{
		x = 0;
		while (x <= 9)
		{
			if ((z * x) > 9)
			{
				_putchar(' ');
				_putchar(((z * x) / 10) + '0');
				_putchar(((z * x) % 10) + '0');
			}
			else
			{
				if (x != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((z * x) + '0');
			}
			if (x != 9)
				_putchar(',');
			x++;
		}
		_putchar('\n');
		z++;
	}
}
