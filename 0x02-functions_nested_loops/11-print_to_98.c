#include <stdio.h>

/**
 * print_to_98 - prints increments or decrements to 98
 * @n: the starting int
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
		while (n > 98)
			printf("%d, ", n--);
	else if (n < 98)
		while (n < 98)
			printf("%d, ", n++);
	printf("98\n");
}
