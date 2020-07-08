#include "holberton.h"
/**
 **_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *@str: pointer.
 *Return: pointer
 */
char *_strdup(char *str)
{
	int i, s;
	char *a, *b;

	if (str == NULL)
	{
		return (NULL);
	}
	for (s = 0; str[s] != '\0'; s++)
		;
	a = (char *)malloc(sizeof(char) * s + 1);
	b = a;
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < s; i++)
	{
		a[i] = str[i];
	}
	return (b);
	free(b);
}
