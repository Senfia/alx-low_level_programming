#include "main.h"

/**
 * printc - print int c a amount of times
 * @a: amount times to print c must greater than 0
 * @c: character to print
 * Return: nothing
 */

void printc(int a, int c)
{
	while (a > 0)
	{
		_putchar(c);
		a--;
	}
}

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
