#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two intigers
 *
 * @argc: int, number of items
 * @argv: items passed, in the array
 * Return: product, -1 otherwise
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (0);
}
