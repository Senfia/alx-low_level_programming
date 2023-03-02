#include "main.h"
/**
 * *rot13 - encodes a string using rot13i
 * @str: the string to encode
 *
 * Return: encode string - str
 */
char *rot13(char *str)
{

	int i, j, n;

	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	n = 52;
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < n)
		{
			if (letters[j] == str[i])
			{
				str[i] = letters[(j + 13) % 26 + (j / 26) * 26];
				j = n;
			}
			j++;
		}
		i++;
	}
	return (str);
}
