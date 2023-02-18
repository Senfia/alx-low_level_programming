#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;
	char chA;

	for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
	for (chA = 'A'; chA <= 'Z'; chA++)
{
	putchar(chA);
}
	putchar('\n');
	return (0);
}
