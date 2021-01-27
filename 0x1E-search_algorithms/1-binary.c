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
	int l, r, m;

	if (array == NULL)
		return (-1);

	l = 0;
	r = (int)size - 1;
	if (array)
	{
		while (l <= r)
		{
			printf("Searching in array: ");
			for (m = l; m < r; m++)
				printf("%d, ", array[m]);
			printf("%d\n", array[m]);
			m = l + (r - l) / 2;
			if (array[m] == value)
				return (m);
			if (array[m] < value)
				l = m + 1;
			else
				r = m - 1;
		}
	}
	return (-1);
}
