#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always zero (success)
 */
int main(void)
{
	char c = 'a';
	char d = 'z';

	for (c; c <= d; c++)
	{
		if (c == 'q' || c == 'e')
		{
			continue;
		}
		else
		{
			putchar(c);
		}
		
	}
	putchar('\n');
	return (0);
}
