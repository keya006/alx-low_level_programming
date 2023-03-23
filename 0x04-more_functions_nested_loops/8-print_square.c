#include "main.h"
/**
 * print_square - prints the shape
 * @size: the parameter of dimensions
 *
 * Return: zero
 */
void print_square(int size)
{
	int i = 0;
	int j = 0;


	if (size <= 0)
	{
		_putchar("0");
	}
	else if (size > 0)
	{
		while (i <= size)
		{
			while (j <= size)
			{
				_putchar("#");
				j++;
			}
			_putchar("\n");
			i++;
		}
	}
	 _putchar("\n");
}
