#include "holberton.h"
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
	char *q;
	int e;

	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}
	for (a = 1; a < argc; a++)
	{
		q = argv[a];
		for (e = 0; q[e] != '\0'; e++)
			if (q[e] > '9' || q[e] < '0')
			{
				printf("Error\n");
				return (1);
			}
		b += atoi(argv[a]);
	}
	printf("%d\n", b);
	return (0);
}
