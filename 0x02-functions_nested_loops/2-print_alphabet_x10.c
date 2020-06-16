#include "holberton.h"
/**
 *print_alphabet_x10 - this program print the alphabet x 10.
 *
 *Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int x = 0, z;

	while (z < 10)
	{
		x = 'a';
		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		z++;
	}
}
