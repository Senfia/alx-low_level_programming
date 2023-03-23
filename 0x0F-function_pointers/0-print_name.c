#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: pointer to printing fuction
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
