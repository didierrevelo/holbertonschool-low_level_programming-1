#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *op_add - returns the sum of a and b.
 *@a: int
 *@b: int
 *Return: sum
 */
int op_add(int a, int b)
{
	int sum;

	sum = (a + b);
	return (sum);
}
/**
 *op_sub - returns the difference of a and b.
 *@a: int
 *@b: int
 *Return: difference
 */
int op_sub(int a, int b)
{
	int dif;

	dif = (a - b);
	return (dif);
}
/**
 *op_mul - returns the product of a and b.
 *@a: int
 *@b: int
 *Return: mul
 */
int op_mul(int a, int b)
{
	int mul;

	mul = (a * b);
	return (mul);
}
/**
 *op_div - returns the result of the division of a by b.
 *@a: int
 *@b: int
 *Return: div
 */
int op_div(int a, int b)
{
	int div;

	div = (a / b);
	return (div);
}
/**
 *op_mod - returns the remainder of the division of a by b.
 *@a: int
 *@b: int
 *Return: remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
