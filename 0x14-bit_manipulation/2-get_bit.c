#include "holberton.h"
/**
 * get_bit - this Function returns the value of a bit at a given index.
 * @n: number of data
 * @index: index
 * Return: returns the value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
	return (-1);

	if ((n >> index) & 1)
	{
		return (1);
	}
	return (0);
}
