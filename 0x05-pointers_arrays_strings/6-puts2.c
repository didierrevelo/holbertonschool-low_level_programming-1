#include "holberton.h"
/**
 *puts2 - this function prints every other character of a string
 *@str: character of a string
 *Return: 0
 */
void puts2(char *str)
{
	int x = 0;
	int z;

	while (str[x] != '\0')
	{
		x++;

	}
	for (z = 0; z < x; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
