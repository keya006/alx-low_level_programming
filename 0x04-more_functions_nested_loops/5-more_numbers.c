#include "main.h"
/**
 * more_numbers - prints a set of numbers 10 times
 *
 * Return: void nothing
 */

void more_numbers(void)
{
	int i = 0;
	int j = 0;

	while (i < 11)
	{
		while (j < 15)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
