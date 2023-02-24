#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f;

	for (f = 1 ; f < 100 ; f++)
	{
		if ((f % 3) == 0 && (f % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if (f % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (f % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
		printf("%d ", f);
		}
	}
	printf("Buzz");
	printf("\n");
	return (0);
}
