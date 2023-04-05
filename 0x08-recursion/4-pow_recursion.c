#include "main.h"

/**
 * _pow_recursion - power calculater
 * @x: 1st parameter
 * @y: 2nd parameter
 *
 * Return: x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
