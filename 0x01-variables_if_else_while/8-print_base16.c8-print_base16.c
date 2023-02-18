#include <stdio.h>
/*
 *prints all the numbers of base 16 in lowercase, followed by a new line.
 */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d = 48;

	while (d < 58)
	{
		putchar(d);
		d++;
	}
	d = 'a';
	while (d <= 'f')
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
