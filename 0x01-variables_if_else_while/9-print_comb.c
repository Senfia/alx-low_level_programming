#include <stdio.h>
/*
 *prints all possible combinations of single-digit numbers.
 */

/**
 *main - entry point
 *
 *Return: 0
 */
int main(void)
{
	int d = 48;

	while (d < 58)
	{
		putchar(d);
		if (d != 57)
		{
			putchar(',');
			putchar(' ');
		}
		d++;
	}
	putchar('\n');

	return (0);
}
