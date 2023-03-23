#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints to n98
 * @n: number input
 *
 * return: zero
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf(98);
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf(98);
	}
	printf("\n");
}
