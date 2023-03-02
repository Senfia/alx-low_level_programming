#include <stdio.h>
#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n : n bytes
 * Return: Always dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
