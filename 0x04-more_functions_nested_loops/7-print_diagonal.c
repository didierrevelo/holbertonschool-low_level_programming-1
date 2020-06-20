#include "holberton.h"
/**
 *print_diagonal - this function draws a diagonal line on the terminal.
 *@n: input
 */
void print_diagonal(int n)
{
	int a;
	int z;

	if (n > 0)
		for (a = 0; a < n; a++)
		{
			if (a > 0)
				for (z = 0; z < a; z++)
					_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
