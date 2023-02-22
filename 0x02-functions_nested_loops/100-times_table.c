#include "main.h"

/**
 * format_number - prints number with appropriate syntax
 * @p: first digit input to format_number
 * @c: second digit input; checks for end of line
 * Return: void
 */

void print_times_table(int n)
{
	int a, b, p;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if (b > 0)
					_putchar(' ');
				p = a * b;
				if (p >= 100)
				{
					_putchar('0' + p / 100);
				}
				else
				{
					if (b > 0)
						_putchar(' ');
				}
				if (p >= 10)
				{
					p  = p - (p / 100) * 100;
					_putchar('0' + p / 10);
					p = p - (p / 10) * 10;
				}
				else
				{
					if (b > 0)
						_putchar(' ');
				}
				_putchar('0' + p);
				if ((a <  n && b == n) || (a == n && b == n))
					_putchar('\n');
				else
					_putchar(',');
			}
		}
	}
}
