#include "holberton.h"
/**
 **_strncat - this function concatenates two strings.
 *@dest: dest
 *@src: src
 *@n: n
 *Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	char *origin = dest;
	int x = 0;

	while (*dest != '\0')
		dest++;

	while (x < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		x++;
	}

	*dest = '\0';
	return (origin);
}
