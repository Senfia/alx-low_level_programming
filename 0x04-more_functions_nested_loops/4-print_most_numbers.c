#include "main.h"
/**
 * print_most_numbers - prints all single digits except 2 and 4
 * Return: nothing
 */

void print_most_numbers(void)
{
	int start;

	for (n = '0'; n <= '9'; n++)
	{
		if (!(n == '2' || n == '4'))
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
