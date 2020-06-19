#include "holberton.h"
/**
 *print_numbers - this function prints the numbers, from 0 to 9.
 *@num: number
 *Return: 0
 */
void print_numbers(void)
{
	int num;
	for (num = '0'; num <= '9'; num++)
		_putchar(num);
	_putchar('\n');
}
