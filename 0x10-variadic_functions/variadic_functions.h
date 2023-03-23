#ifndef VARIADIC_FUNC_H
#define VARIADIC_FUNC_H

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
* struct type - for calling printf function for printing
* @a: format specifier
* @f: formatter
* @typ: pointer to function for printf()
**/
typedef struct type
{
	char a;
	char *f;
	void (*typ)(char *, va_list);
} type;

void print_all(const char * const format, ...);


#endif
