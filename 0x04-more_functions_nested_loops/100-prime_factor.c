inclue "stdio.h"
/**
 * main - get biggest prime factor of given a number
 * Return: 0
 */
int main(void)
{
	long int c, i;

	i = 612852475143;
	c = 2;
	while (c < i)
	{
		if ((i % c) == 0)
		{
			i = i / c;
			c--;
		}
		c++;
	}
	printf("%li\i", i);

	return (0);
}
