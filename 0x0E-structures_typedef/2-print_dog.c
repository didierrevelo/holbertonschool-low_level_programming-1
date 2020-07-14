#include "dog.h"
/**
 *print_dog - this function print struct dog
 *@d: pointer of dog
 *
 */
void print_dog(struct dog *d)
{
	if(d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
