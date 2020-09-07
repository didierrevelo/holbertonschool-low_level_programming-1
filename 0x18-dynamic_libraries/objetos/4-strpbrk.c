#include "holberton.h"
/**
 *_strpbrk - this function searches a string for any of a set of bytes
 *@s: pointer of string s
 *@accept: pointer of string accept
 *Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	while ((i = *s++) != 0)
	{
		for  (p = accept; (j = *p++) != 0;)
			if (j == i)
				return (s - 1);
	}
	return (0);
}
