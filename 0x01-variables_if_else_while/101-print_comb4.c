#include <stdio.h>
/*
 *prints all possible different combinations of three digits
 *
 */

/**
 *main - entry point
 *Return: 0
 */
int main(void)
{
	int d = 48;
	int i, j;

	while (d < 58)
	{
		i = d + 1;
		while (i < 58)
		{
			j = i + 1;
			while (j < 58)
			{
				putchar(d);
				putchar(i);
				putchar(j);
				if (!(d == 55 && i == 56 && j == 57))
				{
					putchar(',');
					putchar(' ');
				}
				j++;
			}
			i++;
		}
		d++;
	}
	putchar('\n');

	return (0);
}
