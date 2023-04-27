#include <stdio.h>

/**
 * bmain - A func that executes before main
 *
 * Return: void
 */

void __attribute__((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
