#include "holberton.h"
/**
 **create_array - this function creates an array of chars, and
 *initializes it with a specific char.
 *@size: size of array
 *@c: character
 *Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int e;

	char *a = malloc(size * sizeof(char));

	if (size == 0 || a == NULL)
	{
		return (NULL);
	}
	else
		for (e = 0; e < size; e++)
		{
			a[e] = c;
		}
	return (a);
}
