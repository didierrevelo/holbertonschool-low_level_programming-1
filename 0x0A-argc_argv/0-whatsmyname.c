#include "holberton.h"
/**
 *main - program that prints its name, followed by a new line.
 *@argc: number of commant line
 *@argv: command line input
 *Return: the name of program
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
