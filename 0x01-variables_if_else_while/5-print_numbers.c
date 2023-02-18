#include <stdio.h>
/**
 *main - entry point
 *spits out numbers 0 to 9
 *Return: 0
 */
int main(void)
{
	int d = 0;

	while (d < 10)
	{
		printf("%d", d);
		d++;
	}
	printf("\n");

	return (0);
}
