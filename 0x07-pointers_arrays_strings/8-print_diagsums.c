#include <stdio.h>
#include "holberton.h"
/**
 *print_diagsums - this function prints the sum of the two diagonals
 * of a square matrix of integers.
 *@a: input array
 *@size: size array
 */
void print_diagsums(int *a, int size)
{
	int i, b1 = 0, b2 = 0;

	for (i = 0; i < size; i++)
	{
		b1 += a[i * (size + 1)];
		b2 += a[(i + 1) * (size - 1)];
	}
	printf("%d, ", b1);
	printf("%d", b2);
	printf("\n");
}
