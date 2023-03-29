#include "main.h"

/**
 * times_table - 0 to 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			res = i * j;
			_putchar(res + 48);
		}
		_putchar('\n');
	}
}
