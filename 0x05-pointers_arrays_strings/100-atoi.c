#include <stdio.h>

/**
 * _atoi - converts string to integer
 * @s: input string
 * Return: integer result from conversion
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int total = 0;
	char null_f = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			null_f = 1;
			total = total * 10 + *s - '0';
		}

		else if (null_f)
			break;
		s++;
	}

	if (sign < 0)
		total = (-total);

	return (total);
}
