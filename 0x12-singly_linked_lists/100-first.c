#include <stdio.h>

void printFunc(void) __attribute__ ((constructor));

/**
 * printFunc - Prints out strings, before main function
 */
void printFunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
