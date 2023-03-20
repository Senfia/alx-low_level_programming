#include "dog.h"
#include <stdlib.h>

/**
* new_dog - creates a new dog.
* @name: char for name of dog
* @age: age of dog
* @owner: char for owner of dog
* Return: new dog of type dog_t
**/
dog_t *new_dog(char *name, float age, char *owner)
{
	int nameLen, ownerLen, i;
	dog_t *dog;

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	nameLen = ownerLen = 0;
	while (name[nameLen++])
		;
	while (owner[ownerLen++])
		;
	dog->name = malloc(nameLen * sizeof(dog->name));
	if (dog->name == NULL)
	{
		free(d1);
		return (NULL);
	}
	for (i = 0; i <= nameLen; i++)
		dog->name[i] = name[i];
	dog->age = age;
	dog->owner = malloc(ownerLen * sizeof(dog->owner));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i <= ownerLen; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
