#include "holberton.h"
char *_strdup(char *str)
{
	int i, s = 0;
	char *a = malloc(sizeof(char) * s + 1);

	if (str == NULL || a == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		a[i] = str[i];
	return (a);
	free(a);
}
