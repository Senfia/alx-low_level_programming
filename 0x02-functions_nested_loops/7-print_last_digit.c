#include "main.h"

/**
 * print_last_digit - returns the last digit of a number
 * @num: takes an int value of the number
 * Return: last digit
 */

int print_last_digit(int num)
{
	int lastD = num % 10;

	if (num < 0)
		lastD = -lastD;

	_putchar('0' + 1);
		return (lastD);
}
