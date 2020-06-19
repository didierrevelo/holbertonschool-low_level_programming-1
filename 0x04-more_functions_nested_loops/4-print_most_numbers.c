#include "holberton.h"
/**
 *print_most_numbers - this function  prints the numbers, from 0 to 9,
 *but Do not print 2 and 4.
 *Return: 0
 */
void print_most_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
		if (a != '2')
			if (a != '4')
				_putchar(a);
	_putchar('\n');
}
