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

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		printf("\n");
	}

	return (0);
}
