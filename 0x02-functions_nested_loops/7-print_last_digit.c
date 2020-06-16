#include "holberton.h"
/**
 *print_last_digit - this function print the last digit of number
 *@num: arbitrary number
 *Return: value of the last digit of a number.
 */
int print_last_digit(int num)
{
	int lastdigit = num % 10;

	if (lastdigit < 0)
	{
		_putchar(-lastdigit + '0');
		return (-lastdigit);
	}
	else
	{
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
}
