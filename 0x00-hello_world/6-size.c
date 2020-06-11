#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charType;
int intType;
long int longint;
long long int longlonging;
float floatType;
printf("Size of a char: %ld byte\n", sizeof(charType));
printf("Size of an int: %ld bytes\n", sizeof(intType));
printf("Size of a long int: %ld bytes\n", sizeof(longint));
printf("Size of a long long int: %ld bytes\n", sizeof(longlongint));
printf("Size of float: %ld bytes\n", sizeof(floatType));
return (0);
}
