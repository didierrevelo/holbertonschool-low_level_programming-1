#include  "holberton.h"
/**
 *ispal - check a string is a palindrome
 *@s: value
 *@a:value
 *@b:value
 *Return: 0
 */
int ispal(char *s, int a, int b)
{
	if (a >= b)
		return (1);

	if (s[a] == s[b])
		return (ispal(s, a + 1, b - 1));
	else
		return (0);
}
/**
 *_strlen_recursion - this function returns the length of a string.
 *@s: string
 *Return: length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s != 0)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
/**
 *is_palindrome - check a string is a palindrome
 *@s: value
 *Return: 0
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s) - 1;

	if ((ispal(s, 0, len)) == 1)
		return (1);
	else
		return (0);

	return (0);
}
