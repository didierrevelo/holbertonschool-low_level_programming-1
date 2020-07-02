#include "holberton.h"
/**
 *_pow_recursion - this function returns the value of x
 * raised to the power of y
 *@x: integer
 *@y: power
 *Return: If y is lower than 0, the function should return -1
 *if y is greater than zero, the function should return x * (x, (y - 1))
 *if y is equal to zero, return 1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
	else
	{
		return (1);

			}
}
