#include "main.h"

/**
 * _isalpha - own version of isalpha()
 * @c: int value to check
 * returns 0 or 1 if c is not lowercase or uppercase
 * Return: 0 if param is not lowercase or uppercase 1 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);
	return (0);
}
