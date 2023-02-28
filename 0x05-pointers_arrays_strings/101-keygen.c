#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme
 * Return: 0
 */
int main(void)
{
	int sum;
	char s;

	srand(time(NULL));
	while (sum <= 2645)
	{
		s = rand() % 126;
		sum += s;
		putchar(s);
	}
	putchar(2772 - sum);
	return (0);
}
