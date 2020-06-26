#include "holberton.h"
/**
 *_strcmp - this function compare two strings
 *@s1: firts string.
 *@s2: second string.
 *Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 == *s2) && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if ((*s1 == '\0') && (*s2 == '\0'))
		return (0);
	else if (*s1 > *s2)
		return ((int)(*s1 - *s2));
	else
		return ((int)(*s1 - *s2));
}
