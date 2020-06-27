#include "holberton.h"
/**
 **rot13 - this function encodes a string into ROT13.
 *@s: array
 *Return: x
 */
char *rot13(char *s)
{
	char *x = s;
	int y = 0;
	char leet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char nm[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*s != '\0')
	{
		while ((*s != leet[y]) && leet[y] != '\0')
		{
			y++;
		}
		if (leet[y] != '\0')
			*s = nm[y];
		s++;
		y = 0;
	}
	return (x);
}
