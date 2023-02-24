#include "main.h"
/**
 * print_square - print square of size size with #
 * @size: size of square
 * Return: void
 */
void print_square(int size)
{

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (int n = 1; n <= size; n++)
	{
		for (int i = 1; i <= size; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
