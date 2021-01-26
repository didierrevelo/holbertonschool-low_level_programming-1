#include "search_algos.h"

/**
 * linear_search - the Linear search algorithm
 * @array: is a pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: the value to search
 * Return: If value is not present in array or if array is NULL,
 * your function must return -1
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
		return (i);
		}
	}
	return (-1);

}
