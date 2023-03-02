#include "main.h"
/**
 *leet - encodes a string into 1337.
 *@chr: string to be encoded.
 *Return: pointer to chr.
 */

char *leet(char *chr)
{
	char lets[] = "oOlLsSoOoO";
	char leets[] = "0011334499";
	int i, j;

	i = 0;
	while (*(chr + i) != '\0')
	{
		j = 0;
	while (j <= 9)
	{
		if (*(chr + i) == lets[j])
		{
			*(chr + i) = leets[j];
			break;
		}
		j++;
	}
	i++;
	}
	return (chr);
}
