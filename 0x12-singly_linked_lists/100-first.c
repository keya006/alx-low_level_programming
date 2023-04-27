#include <stdio.h>

/**
 * bmain - A func that executes before main
 *
 * Return: void
 */

void _attribute_((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
