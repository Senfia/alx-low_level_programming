#include "main.h"
/**
 * _strpbrk - own version of strpbrk()
 *
 * @s: string to be analysed
 * @accept: characters to look for
 * Return: nothing
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return (0);
}
