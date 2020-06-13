#include <stdlib.h>
#include <time.h>
/**
 *main - entry point
 *
 *Return: returns 0 upon successfull run
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive", n);
else if (n < 0)
printf("%d is negative", n);
else
printf("%d is zero", n);
putchar('\n');
return (0);
}
