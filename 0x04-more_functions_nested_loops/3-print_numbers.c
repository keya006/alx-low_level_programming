#include "main.h"
/**
 * print_numbers - numbers 0 to 9
 *
 * Return: o success
 */
void print_numbers(void)
{
	int j = 0;

	while (j < 10)
	{
		_putchar(j);
		j++;
	}
	_putchar('\n');
}
