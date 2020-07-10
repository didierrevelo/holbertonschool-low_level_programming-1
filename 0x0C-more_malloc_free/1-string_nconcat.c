#include "holberton.h"
/**
 **string_nconcat - this function concatenates two strings.
 *@s1: pointer
 *@s2: pointer
 *@n: number of bytes.
 *Return: two strings concatenates.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a, *b;
	unsigned int i, first, second, s;

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
	if (n < second)
		second -= (second - n);

	a = malloc(sizeof(char) * (first + second + 1));
	b = a;
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (i = 0; i < first; i++)
		a[i] = s1[i];
	for (s = 0; s <= second; s++, i++)
		a[i] = s2[s];
	a[i] = '\0';

	return (b);
	free(b);
}
