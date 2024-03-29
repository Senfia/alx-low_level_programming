#include "variadic_function.h"
#include <stdarg.h>

/**
* sum_them_all - sum of all its parameters
* @n: number of arguements
* Return: sum of all parameters or 0
**/
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(list, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
