#include "holberton.h"
/**
 **malloc_checked - function that allocates memory using malloc.
 *@b: variabel.
 *Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		free(a);
		exit(98);
	}
	return (a);
}
