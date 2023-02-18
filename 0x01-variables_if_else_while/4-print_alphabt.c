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
	if (ch == 'd')
		break;
}
	for (chA = 'f'; chA <= 'z'; chA++)
{
	putchar(chA);
	if (chA == 'p')
		break;
}
	for (chA = 'r'; chA <= 'z'; chA++)
{
	putchar(chA);
}
	putchar('\n');
	return (0);
}
