#include "dog.h"
#include <stdlib.h>

/**
* free_dog - frees dogs object.
* @d: dog of type dog_t
* Return: nothing
**/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
