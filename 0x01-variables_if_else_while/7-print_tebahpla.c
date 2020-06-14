#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	char X = 'z';

	for (X = 'z'; X >= 'a'; X--)
		putchar(X);
	putchar('\n');
	return (0);
}
