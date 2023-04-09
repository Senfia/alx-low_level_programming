#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: unsigned int n
 * @index: starting from 0
 * Return: 0, -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bi = ~(1ul << index);

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= bi;

	return (1);
}
