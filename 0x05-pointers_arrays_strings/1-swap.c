#include "main.h"

/**
 * swap_int - interchanges two variables
 * @a: the 1st integer
 * @b: the 2nd integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
