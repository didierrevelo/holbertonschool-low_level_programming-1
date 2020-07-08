#include "holberton.h"
/**
 **str_concat - this function concatenates two strings.
 *@s1: pointer
 *@s2: pointer
 *Return: two strings concatenates.
 */
char *str_concat(char *s1, char *s2)
{
	char *a, *b;
	int i, s, first, second;

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
	a = (char *)malloc(sizeof(char) * (first + second + 1));
	b = a;
	if (a == NULL)
		return (NULL);
	for (i = 0; i < first; i++)
		a[i] = s1[i];
	for (s = 0; s <= second + 1; s++, i++)
		a[i] = s2[s];

	return (b);
	free(b);
}
