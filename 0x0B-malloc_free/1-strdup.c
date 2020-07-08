#include "holberton.h"
/**
 **_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *@str: pointer.
 *Return: pointer
 */
char *_strdup(char *str)
{
	int i, s = 0;
	char *a;
	//char *a = malloc(sizeof(char) * s + 1);

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++);
	//a[i] = str[i];
	a =(char *) malloc(sizeof(char) * s + 1);

	if (a == NULL)
		return (NULL);
	
	for (i = 0; i < s; i++)
		a[i] = str[i];

	return (a);
	free(a);
}
