#include "main.h"
/**
 * print_sign - print sign of integer
 * @n: the integer in question
 *
 * Return: 0 or 1 as specified
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
