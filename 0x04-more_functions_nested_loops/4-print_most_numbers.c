#include "main.h"
/**
 * print_most_numbers - print nos while skipping others
 *
 * Return: nothing void
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
