#include "holberton.h"
/**
 **string_toupper - changes all lowercase letters of a string to uppercase.
 *@a: pointer.
 *Return: h
 */
char *string_toupper(char *a)
{
	char *h = a;

	while (*a != '\0')
	{
		if (*a >= 'a' && *a <= 'z')
			*a = *a - 32;
		a++;
	}
	return (h);
}
