#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;
printf("Size of a char: %ld byte\n", (long int) sizeof(c));
printf("Size of an int: %ld bytes\n", (long int) sizeof(i));
printf("Size of a long int: %ld bytes\n", (long int) sizeof(li));
printf("Size of a long long int: %ld bytes\n", (long int) sizeof(lli));
printf("Size of float: %ld bytes\n", (long int) sizeof(f));
return (0);
}
