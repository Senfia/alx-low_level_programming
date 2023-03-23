#include <function_pinters.h>
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: name of the person
 * @f: pointer to printing fuction
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(98);
	f(name);
}
