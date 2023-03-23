#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes function on elements of array
 * @array: array of params
 * @size: size of array
 * @action: pointer to function to perform
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
