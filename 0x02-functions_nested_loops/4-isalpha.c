#include "holberton.h"
/**
 *_isalpha - this function check for alphabetic character.
 *@c: arbitrary character.
 *Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
