#include "main.h"

/**
 * _abs - returns absolute value of a fnx
 * @n: the integer
 *
 * Return: absolute value
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
	return (0);
}
