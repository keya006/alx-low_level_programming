#include "main.h"
/**
 * print_alphabet - prints alphabet in lower case
 *
 */
void print_alphabet(void)
{
	char b = 'a';
	char c = 'z';

	while (b <= c)
	{
		_putchar(b);
		b++;
	}
	_putchar('\n');
}
