#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 * @str: character pointer
 * Return: str.
 */

char *cap_string(char *str)
{
	int symbl[14] = {' ', '\t', '\n', ',', ';', '.', '!',
		'?', '"', '(', ')', '{', '}'};
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] >= 97 && str[0] <= 122)
	{
			str[0] = str[0] - 32;
	}
	for (j = 0; j < 14; j++)
		if (str[i] >= 97 && str[i] <= 122 && str[i - 1] == symbl[j])
			str[i] = str[i] - 32;
	}
	return (str);
}
