#include "main.h"

/**
 * factorial -finds factorial of a no
 * @n: the number whose factorial is to be
 * calculated
 *
 * Return: return the factorial
 */

int factorial(int n)
{
	if (n < 0)
	{ return (-1);
	}
	else
	{
		if (n == 0)
		{
			return (1);
		}
		else
		{
			return (n * factorial(n - 1));
		}
	}
}
