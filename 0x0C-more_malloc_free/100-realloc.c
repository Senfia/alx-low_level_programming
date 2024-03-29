#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory based
 *
 * @old_size: old memory
 * @new_size: new memory
 * @ptr: pointer to original memory address
 * Return: new memory address
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *tmp, *buff;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	buff = malloc(new_size);
	if (buff == NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		free(ptr);
		return (buff);
	}
	tmp = ptr;
	for (i = 0; i < old_size; i++)
	{
		buff[i] = tmp[i];
	}
	free(ptr);
	return (buff);
}
