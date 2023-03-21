#include <main.h>
/**
 * main - Entry point
 *
 * print_alphabet - *a function that prints
 * the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always zero (success)
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

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
