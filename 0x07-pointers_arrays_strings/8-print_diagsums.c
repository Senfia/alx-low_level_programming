#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of diagonals of an size x size matrix
 *
 * @a: pointer to start of matrix
 * @size: size of matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int n, sum;

	sum = 0;
	for (n = 0; n < size; n++, a += size)
		sum += *(a + n);
	printf("%d, ", sum);
	sum = 0;
	a -= size;
	for (n = 0; n < size; n++, a -= size)
		sum += *(a + n);
	printf("%d\n", sum);
}
