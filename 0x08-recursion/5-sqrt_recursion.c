#include "holberton.h"
/**
 *sqrtrecursion - this function return natural square root of a number.
 *@b: value of n
 *@inc: iterador
 *Return: if inc multiplied by itself is less than b it returns -1, else if inc
 * multiplied by itself is not equal and if it is less than b it calls the
 * recursion of sqrtrecursion.
 */
int sqrtrecursion(int b, int inc)
{
	if ((inc * inc) > b)
		return (-1);
	else if ((inc * inc) != b && (inc * inc) < b)
		return (sqrtrecursion(b, inc + 1));
	else
	return (inc);
}
/**
 *_sqrt_recursion - this function return natural square root of a number.
 *@n: base.
 *Return: if inc multiplied by itself is less than b it returns -1, else if inc
 * multiplied by itself is not equal and if it is less than b it calls the
 * recursion of sqrtrecursion.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (-1);
	else
		return (sqrtrecursion(n, 1));
}
