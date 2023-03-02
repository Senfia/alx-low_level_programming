#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: a pointer
 * @n: a pointer
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, k;

	if (n % 2 != 0)
		k = n + 1;
	else
		k = n;
	for (i = 0; i < k / 2; i++)
	{
		j = a[i];
			a[i] = a[n - 1 - i];
				a[n - 1 - i] = j;
	}
}
