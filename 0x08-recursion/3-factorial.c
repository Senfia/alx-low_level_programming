#include "main.h"

/**
* factorial - calculates factorial of a given number.
* @n: number
* Return: factorial numbers
**/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
