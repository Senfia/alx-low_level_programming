#include "main.h"
/**
 * print_line - prints a dynamically sized line
 * @n:  '_' making up the line
 * Return: nothing
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
