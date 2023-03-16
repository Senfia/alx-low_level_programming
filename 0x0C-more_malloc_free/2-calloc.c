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
	unsigned int i;
	void *p;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	s = p;
	i = 0;
	while (i < nmemb)
		*(s + i++) = 0;

	return (p);
}
