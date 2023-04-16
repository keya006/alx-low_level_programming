#include "main.h"

/**
 * _putchar - character func
 * @c: the arg
 *
 * Return: void
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
