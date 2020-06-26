#include "holberton.h"
/**
 *reverse_array - reverses the content of an array of integers.
 *@a: integer array.
 *@n: number of element of array.
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int end = n - 1;
	int t;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[end];
		a[end] = t;

		end--;

	}

}
