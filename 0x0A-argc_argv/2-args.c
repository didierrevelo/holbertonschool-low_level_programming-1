#include "holberton.h"
/**
 *main - Write a program that prints all arguments it receives.
 *All arguments should be printed, including the first one
 *Only print one argument per line, ending with a new line
 *@argc: number of commant line
 *@argv: command line input
 *Return: the name of program
 */
int main(int argc, char *argv[])
{
	int i;

	printf("%s\n", argv[0]);

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf(" %s\n", argv[i]);
		}
	}

	return (0);
}
