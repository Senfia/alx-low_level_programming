#include "main.h"

/**
 * _strspn - custom version of strspn()
 * @s: string
 * @accept: char to look for
 *
 * Return: j
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, i;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
				break;
		}
		if (!(accept[i]))
			break;
	}
	return (j);
}
