#include "holberton.h"
/**
 **cap_string - this function capitalizes all words of a string.
 *@a: integer
 *Return: 0
 */
char *cap_string(char *a)
{
	int x;

	while (a[x] != '\0')
	{
		if (a[0] >= 97 && a[0] <= 122)
		{
			a[0] -= 32;
		}
		if (a[x] >= 97 && a[x] <= 122 && (a[x - 1] == ',' || a[x - 1] == ';'
			    || a[x - 1] == '.' || a[x - 1] == '!' || a[x - 1] == '?'
			    || a[x - 1] == '"' || a[x - 1] == '\n'
			    || a[x - 1] == '(' || a[x - 1] == ')'
			    || a[x - 1] == '{' || a[x - 1] == '}'
			    || a[x - 1] == ' ' || a[x - 1] == 32 || a[x - 1] == '\t'))
		{
			a[x] -= 32;
		}
		x++;
	}
	return (a);
}
