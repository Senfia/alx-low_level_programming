#include "main.h"
#include <stdio.h>
/**
 * _strchr - checks for a character a string
 * @s: string
 * @c: character
 *
 * Return: Nothing.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (c == '\0')
		return (s + i);
	return (NULL);
}
