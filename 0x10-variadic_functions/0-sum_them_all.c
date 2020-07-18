#include "variadic_functions.h"
/**
 *sum_them_all - this function return the sum of all its parameters.
 *@n: number of parameters
 *Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list h;
	unsigned int move;
	int boo;

	va_start(h, n);

	if (n == 0)
		return (0);

	boo = 0;
	for (move = 0; move < n; move++)
	{
		boo += va_arg(h, int);
	}
	va_end(h);
	return (boo);

}
