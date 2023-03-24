#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	char b = 'a';
	char c = 'z';
	int i = 0;

	while (i < 10)
	{
		while (b <= c)
		{
			_putchar(b);
			b++;
		}
		_putchar('\n');
		i++;
	}
}
