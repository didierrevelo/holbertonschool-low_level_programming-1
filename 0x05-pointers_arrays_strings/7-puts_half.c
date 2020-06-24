#include "holberton.h"
/**
 *puts_half - prints half of a string.
 *@str: string
 */
void puts_half(char *str)
{
	int x = 0;
	int z = 0;

	while (str[x] != '\0')
	{
		x++;
	}
	if (x % 2 == 0)
	{
		z = x / 2;
	}
	else
	{
		z = (x / 2) + 1;
	}
	while (x > z)
	{
		_putchar(str[z]);
		z++;
	}
	_putchar('\n');
}
