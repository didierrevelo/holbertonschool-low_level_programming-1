#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct hola
{
	char *rock;
	void (*far)(va_list);
} hola_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void prin_c(va_list ch);
void prin_i(va_list in);
void prin_f(va_list fl);
void prin_s(va_list str);

#endif /* VARIADIC_FUNCTIONS_H */
