/**
 * get_endianness - checks eadianness
 * Return: 0, -1
 */

int get_endianness(void)
{
	int a = 1;

	char *c = (char *) &a;

	return ((int) *c);
}
