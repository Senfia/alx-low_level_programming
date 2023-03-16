#include <stdlib.h>
#include "main.h"


/**
 * malloc_checked - allocate block of memory with malloc
 * @b: size of space in memory to allocate
 * Return: void, exit(98)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
