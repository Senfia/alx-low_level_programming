#include "main.h"
/**
 * _strstr - locates a substring
 *
 * @haystack: string to search
 * @needle: string to find
 * Return: a pointer to byte in s, NULL if failed
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp, *start;

	while (*haystack != '\0')
	{
		start = haystack;
		temp = needle;
		while (*haystack == *temp && *haystack != '\0'
		       && *temp != '\0')
		{
			haystack++, temp++;
		}
		if (*temp == '\0')
			return (start);
		haystack = start + 1;
	}
	return ('\0');
}
