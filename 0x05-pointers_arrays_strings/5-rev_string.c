#include "holberton.h"
/**
 *rev_string - this function reverses a string
 *@s: reverses a string
 *Return: 0
 */
void rev_string(char *s)
{
	int a;
	int b;
	int c;
	char x;

	for (a = 0; s[a] != '\0'; a++)
	{
	}
	for (b = 0, c = a - 1; b < c ; b++, c--)
	{
		x = s[b];
		s[b] = s[c];
		s[c] = x;
	}


}
