#include "holberton.h"
/**
 **_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *@str: pointer.
 *Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a, *b;
	int i, first, second;
	unsigned int s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (first = 0; s1[first] != '\0'; first++)
	{

	}
	for (second = 0; s2[second] != '\0'; second++)
	{

	}
	a = (char *)malloc(sizeof(char) * (first + n + 1));
	b = a;
	if (a == NULL)
		return (NULL);
	for (i = 0; i < first; i++)
		a[i] = s1[i];
	for (s = 0; s <= n; s++, i++)
		a[i] = s2[s];

	return (b);
	free(b);
}
