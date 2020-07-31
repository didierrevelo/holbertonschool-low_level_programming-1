#include "holberton.h"
/**
 * binary_to_uint - this function converts a binary
 * number to an unsigned int.
 * @b: char of string binary
 * Return: number
 */
unsigned int binary_to_uint(const char *b)
{
	int runner1 = 0, runner2;
	unsigned int result;

	if (b == NULL)
	return (0);

	while (b[runner1] != '\0')
	{
		if (b[runner1] != '0' && b[runner1] != '1')
		return (0);
		runner1++;
	}
	result = 0;
	for (runner2 = 0; b[runner2] != '\0'; runner2++)
	{
		result = result << 1;

		if (b[runner2] == '1')
		result = result + 1;
	}
	return (result);

}
