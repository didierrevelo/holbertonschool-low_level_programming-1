#include "holberton.h"
/**
 *_strstr - locates a substring
 *@haystack: string
 *@needle: substring
 *Return: a pointer to the beginning of the located substring, or NULL if the
 *substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *b = haystack, *p = needle;

		while (*haystack && *needle && *haystack == *p)
		{
			haystack++;
			p++;
		}
		if (!*p)
			return (b);

		haystack = b + 1;
	}
	return ('\0');
}
