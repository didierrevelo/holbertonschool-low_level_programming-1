#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: ALways 0 (success)
 */
int main(void)
{
	char X = 'a';
	char Z = 'a';

	for (X = 'a'; X <= 'z'; X++)
		putchar(X);
	for (Z = 'A'; Z <= 'Z'; Z++)
		putchar(Z);
	putchar ('\n');
	return (0);
}
