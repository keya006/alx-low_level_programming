#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always zero (success)
 */
int main(void)
{
	char c = 'z';
	char d = 'a';

	while (c >= d)
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
