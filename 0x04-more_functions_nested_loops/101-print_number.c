#include "main.h"
/**
 * print_number - prints an integer
 * @n:.input integer parameter
 *
 *
 */

void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n > 0)
	{
		n *= -1;
	}
	else
	{
		_putchar('-');
	}
	if ((n / 10) != 0)
	{
		print_number((n / 10) * -1);
	}
	_putchar((n % 10) * -1 + '0');
}
