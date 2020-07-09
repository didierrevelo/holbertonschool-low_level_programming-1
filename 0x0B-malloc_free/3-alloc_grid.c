#include "holberton.h"
/**
 *alloc_grid - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *@width: pointer.
 *@height: pointer
 *Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j, p;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (j = 0; j <= i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
		for (p = 0; p < width; p++)
			array[i][p] = 0;
	}
	return (array);
}
