#include <stdio.h>
#include "holberton.h"
/**
 *print_to_98 - print numbers in increasing order starting from 98
 *@n: arbitrary number
 *Return: 0 success
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
		printf("\n");
	}
	else  if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
		printf("\n");
	}
	else
	{
		printf("%d", n);
		printf("\n");
	}
}
