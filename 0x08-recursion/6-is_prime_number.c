#include "holberton.h"
/**
 *prime - returns 1 if the input integer is a prime number, otherwise return 0.
 *@a: number to divide by 2
 *@b: value 2
 *Return: this function returns 1 if a number is prime and if it does not
 *return 0
 */
int prime(int a, int b)
{
	if (a % b == 0 && b < a)
	{
		return (0);
	}
	else if (a % b == 0)
	{
		return (1);
	}
	if (a % b != 0)
	{
		return (prime(a, b + 1));
	}
	return (0);
}

/**
 *is_prime_number - this function accommodates the values of n to take them to
 * the next function
 *@n: value to check
 *Return: 0
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (prime(n, 2));
	}
	return (0);
}
