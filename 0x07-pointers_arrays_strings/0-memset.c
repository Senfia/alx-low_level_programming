#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to first byte in memory
 * @b: the byte for replacement
 * @n: the number of byte for the replacement
 * Return: pointer to s(memory area).
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
