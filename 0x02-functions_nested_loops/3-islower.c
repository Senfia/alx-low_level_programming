#include "main.h"

/**
 * _islower(int c) - checks lowercase character
 *
 * @c : - the lower passed
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')

		return (1);
	return(0);
}
