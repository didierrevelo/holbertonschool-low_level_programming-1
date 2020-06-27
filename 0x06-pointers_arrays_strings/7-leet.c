#include "holberton.h"
/**
 **leet - this function encodes a string into 1337.
 *@s: array
 *Return: s
 */
char *leet(char *s)
{
	int x, y;
	char leet[11] = "AEOTLaeotl";
	char nm[11] = "4307143071";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == leet[y])
				s[x] = nm[y];
		}
	}
	return (s);
}
