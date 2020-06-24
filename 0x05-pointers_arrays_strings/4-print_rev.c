#include "holberton.h"
/**
 *print_rev - this function prints a string, in reverse, followed by a
 *new line.
 *@s: the string
 *Return: 0
 */
void print_rev(char *s)
{
	int l = 0;
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	for (l = i - 1; l >= 0; l--)
	{
		_putchar(s[l]);
	}
	_putchar('\n');

}
