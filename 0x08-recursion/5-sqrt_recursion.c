#include "main.h"

/**
 * power_bi - calculates square root
 * @n: the number inputed
 * @c: the iterator
 *
 * Return: square root or -1 of n
 */

int power_bi(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
		{
			return (c);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + power_bi(n, c + 1));
}

/**
 * _sqrt_recursion - a func that returns the natural sqrt of no
 * @n: the number whose sqrt is to be found
 *
 * Return: the natural sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (power_bi(n, 2));
}
