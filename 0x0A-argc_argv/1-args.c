#include "holberton.h"
/**
 *main -  program that prints the number of arguments passed into it.
 *Your program should print a number, followed by a new line
 *@argc: number of commant line
 *@argv: command line input
 *Return: the name of program
 */
int main(int argc, char *argv[])
{
	if (argv[0] != 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
