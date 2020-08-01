#include "holberton.h"
/**
 * flip_bits - this function  returns the number of
 * bits you would need to flip to get from one number to another.
 * @n: values
 * @m: values
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int runner1, runner2 = 0;

	runner1 = n ^ m;

	while (runner1 > 0)
	{
		if ((runner1 & 1) != 0)
			runner2++;

		runner1 = runner1 >> 1;
	}
	return (runner2);
}
