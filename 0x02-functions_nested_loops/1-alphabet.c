#include "main.h"

/**
 * print_alphabet - Print alphabets
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
{
	_putchar(ch++);
}
	_putchar('\n');
}
