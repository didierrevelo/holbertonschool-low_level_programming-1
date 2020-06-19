#include "holberton.h"
/**
 *print_line - this function draws a straight line in the terminal.
 *@n: input
 */
void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
		_putchar('_');
	_putchar('\n');
}
