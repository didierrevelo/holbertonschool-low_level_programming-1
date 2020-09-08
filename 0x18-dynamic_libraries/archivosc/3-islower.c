#include "holberton.h"
/**
 *_islower - this function checks for lowercase characters.
 *@c: arbitrary character.
 *Return: 1 if lowercase.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
