#include "holberton.h"
/**
 *swap_int - this function swaps the values of two integers.
 *@a: value integer
 *@b: value integer
 *Return: swap values
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
