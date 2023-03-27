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

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}
