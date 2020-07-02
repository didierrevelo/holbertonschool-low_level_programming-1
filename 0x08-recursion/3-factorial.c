#include "holberton.h"
/**
 *factorial - this function returns the factorial of a given number.
 *@n: numbers
 *Return: factorial of asignen numbers
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
			return (-1);
}
