#include "main.h"
/**
 * _strln - returns length of string
 *
 * @s: string to be measured
 * Return: length
 */
int _strln(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;
	return (n);
}

/**
 * infinite_add - add two numbers
 * @n1: string of 1st number to add
 * @n2: string of 2nd number to add
 * @r: buffer
 * @size_r: size of buffer
 * Return: pointer to function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b, sum, ten;

	a = _strln(n1) - 1;
	b = _strln(n2) - 1;
	ten = 0;
	*(r + size_r - 1) = '\0';
	size_r--;
	if ((a + 1) > size_r || (b + 1) > size_r || size_r == 0)
		return (0);
	if ((a + 1) == size_r && (b + 1) == size_r && (*n1 - '0')
	    + (*n2 - '0') > 9)
		return (0);
	ten = 0;
	while (a >= 0 || b >= 0)
	{
		if (b < 0)
			sum = *(n1 + a) - '0' + ten;
		else if (a < 0)
			sum = *(n2 + b) - '0' + ten;
		else
			sum = *(n1 + a) - '0' + *(n2 + b) - '0' + ten;
		*(r + size_r - 1) = sum % 10 + '0';
		ten = sum / 10;
		a--, b--, size_r--;
	}
	if (size_r > 0 && ten == 1)
	{
		*(r + size_r - 1) = ten + '0';
		return (r + size_r - 1);
	}
	else if (ten == 0)
		return (r + size_r);
	return (0);
}
