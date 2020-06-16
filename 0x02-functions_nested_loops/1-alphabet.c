#include "holberton.h"
/**
 *print_alphabet - this program print the alphabet
 *
 *Return: Always 0.
 */
void print_alphabet(void)
{
	int X = 'a';

	while (X <= 'z')
	{
		_putchar(X);
		X++;
	}
	_putchar('\n');

}
