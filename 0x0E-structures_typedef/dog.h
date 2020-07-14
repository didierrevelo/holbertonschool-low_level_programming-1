#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>

/**
 *struct dog - structor
 *@name: name of dog
 *@age: age of dog
 *@owner: owner dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
int _putchar(char c);
void print_dog(struct dog *d);

#endif /* DOG_H */
