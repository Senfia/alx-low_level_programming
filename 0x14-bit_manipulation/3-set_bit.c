#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at given index
 * @n: unsigned int n
 * @index: starting from 0
 * Return: index, -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bi = 1ul << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= bi;

	return (1);
}
