#include "holberton.h"
/**
 **_strcpy - check the code for Holberton School students.
 *@dest: this a pointer
 *@src: this a pointer
 *Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int x;
	char a;

	for (x = 0; src[x] != '\0'; x++)
	{
		a = src[x];
		dest[x] = a;
	}
	dest[x] = '\0';
	return (dest);
}
