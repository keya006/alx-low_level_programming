#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always zero (success)
 */
int main(void)
{
	char b = 'a';
	char c = 'z';
	char d = 'A';
	char e = 'Z';

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
