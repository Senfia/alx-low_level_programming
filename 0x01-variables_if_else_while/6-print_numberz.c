#include <stdio.h>
/**
 *main - entry point
 *spits out numbers 0 to 9 using only putchar twice and not char
 *Return: 0
 */
int main(void)
{
	int d = 48;

	while (d < 58)
	{
		putchar(d);
		d++;
	}
	putchar('\n');

	return (0);
}
