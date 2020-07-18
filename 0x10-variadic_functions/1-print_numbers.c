#include "variadic_functions.h"
/**
 *print_numbers - this function prints numbers, followed by a new line.
 *@separator: is the string to be printed between numbers.
 *@n:  is the number of integers passed to the function.
 *Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int h;

	va_start(num, n);

	for (h = 0; h < n; h++)
	{
		printf("%i", va_arg(num, int));
	if (h != n - 1 && separator != NULL)
	printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
