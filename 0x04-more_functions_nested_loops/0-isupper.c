#include "main.h"

/**
 * _isupper - own version of isupper()
 * @c: int value to check
 * returns 0 or 1 if c is not uppercase
 * Return: 0 if param is not uppercase 1 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
