#include "main.h"

/**
 * print_alphabet_x10 - Print alphabets 10 times
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char ch;
	int j;

	for (j = 1; j <= 10; j++)
{
	for (ch = 'a'; ch <= 'z'; ch++)
{
	_putchar(ch);
}
	_putchar('\n');
}
}
