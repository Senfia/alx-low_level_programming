#include "main.h"
/**
 * print_chessboard - prints a chessboard like pattern
 * @a: points to array of integers
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++, *a++)
	{
		for (j = 0; j < 8; j++)
			_putchar((*a)[j]);
		_putchar('\n');
	}
}
