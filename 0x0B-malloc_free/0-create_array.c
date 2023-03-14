#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
* simple_print_buffer - prints buffer in hexadecimal
* @buffer: memory of address to print
* @size: size of the memory to print
*
* Return: Nothing.
*/
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}
