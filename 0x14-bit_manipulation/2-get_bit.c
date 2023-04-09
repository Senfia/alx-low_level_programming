#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns value of a bit at given index
 * @n: unsigned int n
 * @index: starting from 0
 * Return: index, -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int mask = 1ul << index;

	return ((n & mask) ? 1 : 0);
}
