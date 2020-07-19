#include "variadic_functions.h"

/**
 *print_c - print char.
 *@home: char.
 *Return: 0
 */
void print_c(va_list home)
{
	printf("%c", va_arg(home, int));
}
/**
 *print_i - print integrer.
 *@home: i.
 *Return: 0
 */
void print_i(va_list home)
{
	printf("%d", va_arg(home, int));
}
/**
 *print_f - print float.
 *@home: float
 *Return: 0
 */
void print_f(va_list home)
{
	printf("%f",  va_arg(home, double));
}
/**
 *print_s - print string.
 *@home: string
 *Return: 0
 */
void print_s(va_list home)
{
	char *d;

	d = va_arg(home, char *);
	if (d == NULL)
		d = "(nil)";
	printf("%s", d);
}

/**
 * print_all - this function prints anything
 * @format: is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int a = 0, b;
	char *ptr = "";

	va_list home;
	hola_t  print[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL}
	};

	va_start(home, format);
	while (format != NULL && format[a] != '\0')
	{
		b = 0;
		while (b < 4)
		{
			if (format[a] == *(print[b].rock))
			{
				printf("%s", ptr);
				print[b].far(home);
				ptr = ", ";
				break;
			}
			b++;
		}
		a++;
	}
	va_end(home);
	printf("\n");
}
