#include "main.h"
/**
 * _memcpy - copies bytes from src to dest address
 * @src: source address
 * @dest: the address bytes will be overwritten
 * @n: No.of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
