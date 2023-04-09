#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string will be of 0 and 1
 * Return: the unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;
	int i = 0;

	if (b == 0)
		return (0);

	while (b[i] != '\0')
	{
	if (b[i] == '0' || b[i] == '1')
	{
		output = output << 1;
		output += b[i] - '0';
		i++;
	} else
		return (0);
	}

	return (output);
}
