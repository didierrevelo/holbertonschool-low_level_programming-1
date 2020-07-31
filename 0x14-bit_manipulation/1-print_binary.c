#include "holberton.h"
/**
 * print_binary - print the binary representaion
 * @n: number to represented
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
		_putchar ((n & 1) + '0');
	}
	else
	{
		_putchar (n + '0');
	}
}
