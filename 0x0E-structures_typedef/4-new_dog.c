#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *new_dog - thsi function creates a new dog
 *@name: neme dog
 *@age: age dog
 *@owner: name of the owner of dog
 *Return: return NULL if the function is NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name2, owner2;

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (new_dog);
	for (name2 = 0; name[name2]; name2++)
		;
	for (owner2 = 0; owner[owner2]; owner2++)
		;
	new_dog->name = malloc(sizeof(char) * (name2 + 1));
	new_dog->owner = malloc(sizeof(char) * (owner2 + 1));

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	for (name2 = 0; name[name2]; name2++)
		new_dog->name[name2] = name[name2];
	for (owner2 = 0; owner[owner2]; owner2++)
		new_dog->owner[owner2] = owner[owner2];
	new_dog->name[name2] = 0;
	new_dog->owner[owner2] = 0;
	new_dog->age = age;
	return (new_dog);
}
