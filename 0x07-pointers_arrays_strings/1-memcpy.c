#include "holberton.h"
/**
 *_memcpy - this function  copies memory area.
 *@dest: memory area
 *@src: memory area
 *@n: copies n bytes
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *a = dest;
	char *b = src;

	while (n-- > 0)
		*a++ = *b++;
	return (dest);
}
