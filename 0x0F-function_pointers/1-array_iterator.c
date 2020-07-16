#include "function_pointers.h"
/**
 *array_iterator - this function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int move;

	if (array && action)
	{
		for (move = 0; move < size; move++)
			action(array[move]);

	}
}
