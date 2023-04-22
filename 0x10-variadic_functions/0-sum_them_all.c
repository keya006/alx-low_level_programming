#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of parameters
 *
 * Return: sum of args
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	int i;

	if (n == 0)
	{
		return (0);
	}

	else
	{
		var_list ptr;
		var_start (ptr, n);
		for (i = 0; i < n; i++)
		{
			sum += var_arg(ptr, int);
		}
		var_end(ptr);
		return (sum);
	}
}
