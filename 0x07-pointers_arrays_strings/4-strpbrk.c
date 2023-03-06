#include "main.h"
/**
 * _strpbrk - own version of strpbrk()
 *
 * @s: string to be analysed
 * @accept: characters to look for
 * Return: a pointer to byte in s, NULL if failed
 */
char *_strpbrk(char *s, char *accept)
{
	char *tmp;

	tmp = accept;
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		accept = tmp;
		s++;
	}
	if (*s == '\0')
		return ('\0');
}	return (s);
