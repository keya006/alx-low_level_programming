#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always zero (success)
 */
int main(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		 putchar(c);
	}

	for (char d = 'A'; d <= 'Z'; d++)
	{
		putchar(d);
	}
	putchar('\n');
	return (0);
}
