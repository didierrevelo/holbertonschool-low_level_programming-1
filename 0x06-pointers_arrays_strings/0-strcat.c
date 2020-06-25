#include "holberton.h"
/**
 **_strcat - this function concatenates two strings.
 *@dest: firts part of strings.
 *@src: second pert of strings.
 *Return: origin
 */
char *_strcat(char *dest, char *src)
{
	char *origin = dest;
	int x, z;

	for (x = 0; dest[x] != '\0'; ++x)
	{
	}
	for (z = 0; src[z] != '\0'; ++z, ++x)
	{
		dest[x] = src[z];
	}
	dest = '\0';
	return (origin);
}
