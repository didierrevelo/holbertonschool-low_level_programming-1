#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;
	char X = 'a';

	for (i = 48; i <= 57; i++)
		putchar(i);
	for (X = 'a'; X <= 'f'; X++)
		putchar(X);
	putchar('\n');
	return (0);
}
