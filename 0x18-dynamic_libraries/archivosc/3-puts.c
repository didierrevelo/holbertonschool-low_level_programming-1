#include "holberton.h"
/**
 *_puts - this function prints a string, followed by a new line, to stdout.
 *@str: string
 *Return: 0
 */
void _puts(char *str)
{
	char *c;

	c = str;
	while (*c != '\0')
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');
}
