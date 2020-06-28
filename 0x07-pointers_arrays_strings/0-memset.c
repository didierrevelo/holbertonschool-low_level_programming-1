#include "holberton.h"
/**
 **_memset - this function fills memory with a constant byte.
 *@s: memory area pointed to by
 *@b: the constant byte
 *@n: number of byte
 *Return: Returns a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *p = (unsigned char *) s;

	while (n-- > 0)
		*p++ = b;
	return (s);
}
