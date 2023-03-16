#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 *
 * @nmemb: named number of elements
 * @size: size of memory block, in bytes
 *
 * Return: pointer to memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *tmp;
	void *buff;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	buff = malloc(nmemb * size);
	if (buff == NULL)
		return (NULL);
	tmp = buff;
	for (i = 0; *(tmp + i) != '\0'; i++)
		*(tmp + i) = 0;
	return (buff);
}
