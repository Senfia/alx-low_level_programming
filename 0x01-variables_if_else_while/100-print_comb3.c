#include <stdio.h>
/*
 *prints all possible different combinations of two digits.
 *
 */

/**
 *main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int d = 48;
	int i;

	while (d < 58)
	{
		i = d + 1;
		while (i < 58)
		{
			putchar(d);
			putchar(i);
			if (!(d == 56 && i == 57))
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		d++;
	}
	putchar('\n');

	return (0);
}
