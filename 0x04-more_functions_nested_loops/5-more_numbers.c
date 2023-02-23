#include "main.h"
/**
 * more_numbers - prints 0 to 14
 * Return: void
 */

void more_numbers(void)
{
	int count;

	for (count = 0; count <= 9; count++)
	{
		int n;

		for (n = 0; n <= 14; n++)
		{
			if (n / 10 != 0)
			{
				_putchar(n / 10 + 48);
			}
			_putchar(n % 10 + 48);
		}
		_putchar('\n');
	}
}
