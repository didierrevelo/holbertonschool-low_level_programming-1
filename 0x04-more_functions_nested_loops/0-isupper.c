#include "holberton.h"
/**
 *_isupper - this function checks for uppercase character
 *@c: input
 *Return: 1 if c is uppercase and 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}