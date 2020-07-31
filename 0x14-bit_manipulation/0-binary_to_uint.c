#include "holberton.h"
/**
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == '\0')
	return (0);

	int runner1 = 0, runner2;
	unsigned int result;

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

		if (b[runner2] == 49)
		result = result + 1; 
	}
	return (result);

}
