#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always zero (success)
 */
int main(void)
{
	char b = '0';
	char c = '9';
	char d = 'a';
	char e = 'f';

	while (b <= c)
	{
		putchar(b);
		b++;
	}

	while (d <= e)
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
