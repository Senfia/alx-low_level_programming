#include "main.h"

/**
 * print_last_digit - returns the last digit of a number
 * @num: takes an int value of the number
 * Return: last digit
 */

int print_last_digit(int num)
{
	if (num < 0)
	{
		num *= -1;
	}
	num %= 10;
	_putchar(num + '0');
	return (num);
}
