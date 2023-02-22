#include <stdio.h>

/**
 * main - entry point
 * computes and prints the sum
 * Return: nothing
 */
int main(void)
{
	int total, i;

	i = 0;
	total = 0;
	while (i < 1024)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			total += i;
		i++;
	}
	printf("%d\n", total);
	return (0);
}
