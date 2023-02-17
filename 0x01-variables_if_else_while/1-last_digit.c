#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
{
	int last_digit_p = n % 10;

	printf("Last digit of %d is %d and is greater than 5\n", n, last_digit_p);
}
	if (n == 0)
{
	int last_digit_p = n % 10;

	printf("Last digit of %d is %d and is 0\n", n, last_digit_p);
}
	if (n < 0)
{
	int digit_p = n % 10;

	printf("Last digit of %d is %d and is 0\n", n, digit_p);
}
	return (0);
}
