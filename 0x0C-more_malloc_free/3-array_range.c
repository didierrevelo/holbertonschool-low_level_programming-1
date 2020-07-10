#include "holberton.h"
/**
 **array_range - function creates an array of integers.
 *@min: value 0
 *@max: value 10
 *Return: pointer.
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < max - min + 1; i++)
		array[i] = min + i;
	return (array);
}
