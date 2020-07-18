#include "variadic_functions.h"
/**
 *print_strings - this function prints strings, followed by a new line.
 *@separator: is the string to be printed between the strings
 *@n:is the number of strings passed to the function.
 *Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int d;
	char *b;

	va_start(str, n);

	for (d = 0; d < n; d++)
	{
		b = (va_arg(str, char *));
		if (b)
			printf("%s", b);
		if(!b)
			printf("(nil)");

		if (d != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str);
}
