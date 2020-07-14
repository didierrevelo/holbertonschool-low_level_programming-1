#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 *init_dog - this function initialize a variable of type struct dog
 *@d: pointer dog
 *@name: name of dog
 *@age: age of dog
 *@owner: name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
