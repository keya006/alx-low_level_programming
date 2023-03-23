#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints to 98
 * @n: number input
 *
 * return: 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf(n);
			n++;
		}
	}
	else if (n == 98)
	{
		printf(n);
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf(n);
			n--;
		}
	}
	return (0);
}
