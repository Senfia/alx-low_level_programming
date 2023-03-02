#include "main.h"
/**
 *leet - encodes a string
 *@chr: string to be encoded
 *Return: pointer to chr
 */

char *leet(char *chr)
{
	char lets[] = "aAeEoOtTlL";
	char leets[] = "4433007711";
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
