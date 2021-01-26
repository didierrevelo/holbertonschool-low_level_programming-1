#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: is a pointer to the first element of the array to search
 * @size:  is the number of elements in array
 * @value:  is the number of elements in array
 * Return: -1
 */

int binary_search(int *array, size_t size, int value)
{
	int  l, r, m;

	if (array == NULL)
		return (-1);
	l = 0;
	r = (int)size - 1;

	while (l <= r)
{
	m = (l + r) / 2;
	{
		printf("Searching in array: ");
		for (; l <= r; l++)
		{
			rintf("%d", array[l]);
			if (l != r)
			printf(", ");
		}
		printf("\n");
		}
		if (array[m] < value)
		l = m + 1;
		else if (array[m] > value)
		r = m - 1;
		else
		{
			return (m);
		}
	}
	return (-1);
}
