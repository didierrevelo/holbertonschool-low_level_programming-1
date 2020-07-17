#include "function_pointers.h"
#include <stdlib.h>
/**
 *int_index - function searches for an integer.
 *@array: pointer to array
 *@size: is the number of elements in the array array
 *@cmp: is a pointer to the function to be used to compare values
 *Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int move;

	if (array && size && cmp)
	{
		for (move = 0; move < size; move++)
		{
			if (cmp(array[move]) == 1)
				return (move);
		}
	}
	return (-1);
}
