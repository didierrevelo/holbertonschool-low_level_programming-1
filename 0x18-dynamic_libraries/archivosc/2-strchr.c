#include "holberton.h"
/**
 *_strchr - this function locates a character in a string.
 *@s: pointer of array string
 *@c: character to localice.
 *Return: null
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return ('\0');
}
