#include "main.h"

/**
 * _islower - own version of islower()
 * @c: int value to check
 * returns 0 or 1 if c is not lowercase
 * Return: 0 if param is not lowercase 1 otherwise
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')

		return (1);
	return (0);
}
