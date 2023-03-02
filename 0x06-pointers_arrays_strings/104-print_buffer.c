#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 *
 * @size: size of string
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int r, j, i;

	r = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (r < size)
	{
		j = size - r < 10 ? size - r : 10;
		printf("%08x: ", r);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + r + i));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + r + i);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		r += 10;
	}
}
