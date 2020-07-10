#include "holberton.h"
/**
 **malloc_checked - function that allocates memory using malloc.
 *@b: variabel.
 *Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	int *a;

	a = malloc(sizeof(b));
	if (a == NULL)
	{
		free(a);
		exit(98);
	}
	return (a);
}
