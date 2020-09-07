#include"holberton.h"
/**
 * _atoi - convert a string to an integer.
 *
 * @s: pointer.
 *
 * Return: result entero.
 */
int _atoi(char *s)
{
	int super = 1;
	unsigned int result = 0;
	char work = 0;

	while (*s)
	{
		if (*s == '-')
		 super = super * -1;
		if (*s >= '0' && *s <= '9')
		{
			work = 1;
			result = result * 10 + *s - '0';
		}
		else if (*s < '0' || *s > '9')
		{
			if (work)
				break;
		}
		s++;
	}
	if  (super < 0)
		result = (-(result));
	return (result);
}