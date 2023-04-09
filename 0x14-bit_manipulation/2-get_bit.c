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
	unsigned int bi = 1ul << index;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n & bi) ? 1 : 0);
}
