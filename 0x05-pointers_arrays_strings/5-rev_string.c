#include "main.h"

/**
 *rev_string - Entry point
 *@s: pointer to the string we want to change
 *Return: nothing
 */
void rev_string(char *s)
{
	int i;
	int j;
	char msg[1000];

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}

	j = 0;
	while (*(s + j) != '\0')
	{

		msg[j] = *(s + j);
		j++;
	}

	j = 0;
	while (i >= 0)
	{
		s[j] = msg[i - 1];
		i--;
		j++;
	}
}
