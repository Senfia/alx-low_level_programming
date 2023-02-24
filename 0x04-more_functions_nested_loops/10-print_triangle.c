#include "main.h"

/**
 * print_triangle - print a triangl, ascii art
 * @size: size
 * Return: nothing
 */

void print_triangle(int size)
{
	int i;

	if (size > 0)
	{
		i = 1;
		while (i <= size)
		{
			printc(size - i, ' ');
			printc(i, '#');
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
