#include <stdio.h>
/**
 *main - this function print FizzBuzz.
 *Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i > 0)
		{
			if (i != 1)
				printf(" ");
			if (i % 3 == 0 && i % 5 == 0)
				printf("FizzBuzz");
			else if (i % 3 == 0)
				printf("Fizz");
			else if (i % 5 == 0)
				printf("Buzz");
			else
				printf("%d", i);
		}
	}
	printf("\n");
}
