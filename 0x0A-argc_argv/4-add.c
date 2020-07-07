#include "holberton.h"
/**
 *_isdigit - this function checks for a digit
 *@c: input
 *Return: 1 if c is a digit or 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 *main - program that adds positive numbers.
 *@argc: number of commant line
 *@argv: command line input
 *Return: If no number is passed to the program, print 0, followed by
 * a new line if one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1
 */
int main(int argc, char *argv[])
{
	int a, b = 0;

	if (argc < 1)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		if (_isdigit(*argv[a]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
			b += atoi(argv[a]);
	}
	printf("%d\n", b);
	return (0);
}
