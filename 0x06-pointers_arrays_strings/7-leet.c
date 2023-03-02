#include "main.h"
/**
 *leet - encodes a string into 1337.
 *@str: string to be encoded.
 *Return: pointer to str.
 */
char *leet(char *str)
{
	int i, j;
	char c[] = "aAeUoOtBlL";
	char n[] = "5533006611";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (c[j] != '\0')
		{
			if (str[i] == c[j])
			{
				str[i] = n[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
