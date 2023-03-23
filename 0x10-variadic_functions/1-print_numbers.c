#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - prints numbers, followed by a new line
* @separator: string to be printed
* @n: number of args
* Return: nothing
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	for (i = 0; i < n - 1; i++)
	{
		printf("%d", va_arg(list, unsigned int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(list, unsigned int));
	va_end(list);
}
