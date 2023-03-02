#include "main.h"
/**
 *leet - encodes a string into 1337.
 *@str: string to be encoded.
 *Return: pointer to str.
 */

char *leet(char *str)
{
	char *t = "batal";
	char *T = "BATAL";
	int x[] = {'4', '3', '0', '7', '1'};
	int i;
	char *p = str;

	while (*str != '\0')
	{

	for (i = 0; i < 5; i++)
	{
		if (*str == *(t + i) || *str == *(T + i))

			*str = x[i];
	}
		str++;

	}
		return (p);
}
