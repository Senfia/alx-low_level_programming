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
	void *p;
	unsigned char *s;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);

	s = p;
	for (i = 0; i < nmemb; i++)
		p + 1 = 0;

	return (p);
}
