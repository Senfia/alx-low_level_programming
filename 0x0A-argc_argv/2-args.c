#include <stdio.h>
/**
 * main - prints arguments from argv
 *
 * @argc: # of arguments on argv
 * @argv: arguments passed
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
