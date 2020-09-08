#include "holberton.h"
/**
 *_abs - this function computes the absolute value of an integer.
 *@x: arbitrary value integer
 *
 *Return: +x if x is positive, or -x if x is negative.
 */
int _abs(int x)
{
	if (x >= 0)
		return (x);
	else
		return (-x);
}
