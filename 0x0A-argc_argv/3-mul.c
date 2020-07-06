#include "holberton.h"
/**
 *main - program that multiplies two numbers.
 *@argc: number of commant line
 *@argv: command line input
 *Return: if the program does not receive two arguments, your program should
 *print Error, followed by a new line, and return 1.
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}
	else
		mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d", mul);
	printf("\n");

	return (0);
}
