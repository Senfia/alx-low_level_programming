#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits to flip to get a different number
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xr = n ^ m;

	unsigned int cnt = 0;

	while (xr != 0)
	{
	if (xr & 1)
	{
		cnt++;
	}
	xr >>= 1;
	}
	return (cnt);
}
