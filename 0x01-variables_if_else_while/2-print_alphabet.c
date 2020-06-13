#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	char X = 'a';

	for (X = 'a'; X <= 'z'; X++)
		putchar(X);
	putchar('\n');
	return (0);
}
