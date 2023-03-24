#include "main.h"
/**
 * print_diagonal - shape a diagonal
 * @n: the parameter
 *
 * Return: nothing void
 */

void print_diagonal(int n)
{
	int i = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			_putchar('\');
			_putchar('\n');
			i++;
		}
	}
}

