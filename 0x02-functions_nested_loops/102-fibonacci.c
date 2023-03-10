#include <stdio.h>

/**
 * main - calculates and prints fibonacci sequence
 *
 * Return: void
 */

int main(void)
{
	long next, a, b;
	int counter, start;

	start = 2;
	counter = 49;
	a = 1;
	b = 2;
	printf("%ld, %ld, ", a, b);
	while (start < counter)
	{
		next = a + b;
		printf("%ld, ", next);
		a = b;
		b = next;
		start++;
	}
	printf("%ld\n", a + b);
	return (0);
}
